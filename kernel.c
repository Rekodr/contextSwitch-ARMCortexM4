/*
 * @Author: Recodeo Rekod
 * @Description
 */

#include "kernel.h"
#include "core.h"
#include "Systick.h"
#include "driverlib.h"


extern void thread1(void);
extern void thread2(void);


void extern createThread(size_t* state, char* stack);

thread_t threadTable[] = {
     thread1,
     thread2
};
#define NUM_THREADS (sizeof(threadTable)/sizeof(threadTable[0]))
threadStruct_t threads[NUM_THREADS]; // the thread table

static threadStruct_t* presentThread;
static int save = 0;
int currThread;//The currently active thread
size_t uartLock;


void initKernel(void){
    int i;
    uartLock = 0;
    currThread = -1;
    lockInit(&uartLock);

    for(i=0; i< NUM_THREADS; i++){
        threads[i].active = 1;

        threads[i].stack = (char*)malloc(STACK_SIZE) + STACK_SIZE;
        if(threads[i].stack == NULL)
            exit(1);
    }

    SysTick_Init();
    MAP_Interrupt_enableMaster();
}

void taskSelect(){
    MAP_Interrupt_enableMaster();

}

