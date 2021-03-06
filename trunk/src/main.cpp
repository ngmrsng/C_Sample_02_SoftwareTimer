/**********************************************************
 * @file main.cpp
 * @brief Software Timer Sample
 * @author ngmrsng
 * @date 2016/08/08
 *********************************************************/

#include <U_Control.h>
#include <U_Timer.h>
#include <windows.h>	// HANDLE, INFINITE, Sleep
#include <process.h>	// _beginthread

static HANDLE	hMutex; //ミューテックスのハンドル
static int count1 = 0; //mutex で変数を保護する
static int count2 = 0; //保護しない

/*int main(void);*/

/**
 * @fn
 * int main(int argc, char **argv)
 * @brief main function for gtest
 * @return result of test
 * @sa RUN_ALL_TESTS()
 * @detail 詳細な説明
 */
int main(int argc, char **argv)
{
	HANDLE	hThread[2];

	hMutex = CreateMutex(NULL,FALSE,NULL);	//ミューテックス生成

	hThread[0] = (HANDLE)_beginthread(main_thread, 0, (LPVOID *)&(hMutex[0]));	//スレッド１作成
	hThread[1] = (HANDLE)_beginthread(main_loop, 0 ,(LPVOID *)&(hMutex[1]));	//スレッド２作成

	//スレッド１、２終了待ち
	WaitForMultipleObjects(2,hThread,TRUE,INFINITE);

	//ハンドルクローズ
	CloseHandle(hThread[0]);
	CloseHandle(hThread[1]);
	CloseHandle(hMutex);

	return 0;
}
