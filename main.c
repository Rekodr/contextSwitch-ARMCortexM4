/*
 * @Author: Recodeo Rekod
 * @Description
 */

#include "driverlib.h"
#include "kernel.h"

int main(void)
{
    /* Stop Watchdog  */
    MAP_WDT_A_holdTimer();

    initKernel();
    while(1)
    {
        
    }
}
