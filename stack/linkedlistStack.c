/* 
 * Data Structure - Stack(linked list)
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "linkedlistStack.h"

void stackInit(Stack *pStack){
	pStack->head = NULL;
}

int sIsEmpty(Stack *pStack){
	if(pStack->head == NULL) return TRUE;
	else return FALSE;
}

void sPush(Stack *pStack, int data){
	Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));

	newNode->value = data;
	newNode->next = pStack->head;
	
	pStack->head = newNode;
}

int sPop(Stack *pStack){
	int tempData;
	int *tempNode;

	if(sIsEmpty(pStack)){
		printf("Stack is EMPTY\n");
		exit(-1);
	}
	else{
		tempData = pStack->head->value;
		tempNode = pStack->head;

		pStack->head = pStack->head->next;
		free(tempNode);
		return tempData;
	}
}

int sPeek(Stack *pStack){
	if(sIsEmpty(pStack)){
		printf("Stack is EMPTY\n");
		exit(-1);
	}
	else{
		return pStack->head->value;
	}
}
