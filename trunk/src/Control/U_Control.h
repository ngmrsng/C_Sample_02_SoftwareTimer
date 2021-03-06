/**********************************************************
 * @file U_Control.h
 * @brief stub for timer
 * @author ngmrsng
 * @date 2016/08/08
 *********************************************************/

/*#include <config.h>*/
#include <windows.h>	// HANDLE, INFINITE, Sleep
#include <process.h>	// _beginthread

/**
 * @fn
 * void FireTimer(int id, int fireTime)
 * @brief start timer function
 * @return void
 * @sa 
 * @detail 
 */
void FireTimer(int id, int fireTime);

/**
 * @fn
 * void FireTimer(int id, int fireTime)
 * @brief start timer function
 * @return void
 * @sa 
 * @detail 
 */
void main_thread(LPVOID *	pParam);
