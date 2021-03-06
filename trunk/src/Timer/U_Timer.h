/**********************************************************
 * @file U_Timer.h
 * @brief timer function
 * @author ngmrsng
 * @date 2016/08/08
 *********************************************************/

/*#include <config.h>*/
/*#include <threads.h>*/
#include <windows.h>	// HANDLE, INFINITE, Sleep
#include <process.h>	// _beginthread

/**
 * @fn StartTimer(int id, int fireTime)
 * @brief start timer function
 * @return void
 * @sa 
 * @detail 
 */
void StartTimer(int id, int fireTime);

/**
 * @fn StartTimer(int id)
 * @brief stop timer function
 * @return void
 * @sa 
 * @detail 
 */
void StopTimer(int id);

/**
 * @fn main_loop(LPVOID)
 * @brief main loop
 * @return void
 * @sa 
 * @detail 
 */
void main_loop(LPVOID *	pParam);
