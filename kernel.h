/*
 * @Author: Recodeo Rekod
 * @Description
 */

#ifndef _KERNEL_H_
#define _KERNEL_H_

#include <stdlib.h>
extern void createThread(unsigned* regState, char* stack);

#define STACK_SIZE 4096

void threadStarter(void);
void initKernel(void);
void taskSelect(void);
void switchContext(void);

#endif
