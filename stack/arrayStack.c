/* 
 * Data Structure - Stack(array)
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrayStack.h"

void stackInit(Stack *pStack){
	pStack->top = -1;
}

int sIsEmpty(Stack *pStack){
	if(pStack->top < 0) return TRUE;
	else return FALSE;
}

void sPush(Stack *pStack, int data){
	if(pStack->top == (STACK_SIZE - 1)){
		printf("Stack is FULL\n");
		exit(-1);
	}
	else{
		int index = pStack->top + 1;
		pStack->stackArray[index] = data;
		pStack->top++;
	}
}

int sPop(Stack *pStack){
	if(sIsEmpty(pStack)){
		printf("Stack is EMPTY\n");
		exit(-1);
	}
	else{
		int index = pStack->top;
		pStack->top = index - 1;
		return pStack->stackArray[index];
	}
}

int sPeek(Stack *pStack){
	if(sIsEmpty(pStack)){
		printf("Stack is EMPTY\n");
		exit(-1);
	}
	else 
		return pStack->stackArray[pStack->top];
}
