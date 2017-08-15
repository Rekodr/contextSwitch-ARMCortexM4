// --- Systick.c ---
// --- Created on: Jul 30, 2017 ---
// --- Author: Chirag Parikh  ---

/* DriverLib Includes */
#include "driverlib.h"

// ----- Initialize SysTick ------
void SysTick_Init(void)
{
    SysTick->CTRL = 0;
    SysTick->LOAD = 0xbb8;
    SysTick->VAL = 0;
    SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Pos;
    SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk;
    SysTick->CTRL |= SysTick_CTRL_TICKINT_Pos;
}



