/**********************************************************
 * @file U_Control.cpp
 * @brief stub for timer
 * @author ngmrsng
 * @date 2016/08/08
 *********************************************************/

#include <U_Control.h>
#include <stdio.h>	// printf

/*********************************************************/
void FireTimer(int id)
{

}

/*********************************************************/
void main_thread(LPVOID *	pParam)
{
	HANDLE hMutex = (HANDLE)pParam;
	int	i;
	while(1){
		WaitForSingleObject(hMutex,INFINITE); //mutex 間は他のスレッドから変数を変更できない
		printf("count1:");
		for(i=0;i<10;i++){
			printf("%d:",count1);
			count1++;
			Sleep(50);
		}
		printf("\n");
		ReleaseMutex(hMutex);

		//mutex で変数を保護しないと他のスレッドから変数を変更できる
		printf("count2:");
		for(i=0;i<10;i++){
			printf("%d:",count2);
			count2++;
			Sleep(50);
		}
		printf("\n");
	}
}
