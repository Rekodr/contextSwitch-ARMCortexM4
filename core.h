/*
 * @Author: Recodeo Rekod
 * @Description
 */


#ifndef CORE_H_
#define CORE_H_

#include <stdlib.h>

extern int currThread;
extern size_t uartLock;
void lockInit(size_t* lock);
extern size_t lockAcquire(size_t* lock);
extern void lockRelease(size_t* lock);
void threadStarter(void);
typedef void (*thread_t)(void);
void yield();



extern void yield();

typedef struct {
    size_t active;
    char *stack;
    unsigned state[10];
} threadStruct_t;


#endif
