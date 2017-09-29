/* 
 * Data Structure - Stack
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#include <stdio.h>
#include "arrayStack.h"

void testStack();
void printStack();

int main(){

	testStack();
	return 0;
}

void testStack(){
	Stack myStack;
	stackInit(&myStack);

	while(1){
		printf("####################\n");
		printf("#    1. Push       #\n");
		printf("#    2. Pop        #\n");
		printf("#    3. Peek       #\n");
		printf("#    4. Exit       #\n");
		printf("####################\n");

		int option;
		scanf("%d", &option);
		
		switch(option){
			case 1:{
							 int number;
							 printf("INPUT: ");
							 scanf("%d", &number);
							 sPush(&myStack, number);								

							 printStack(&myStack);
							 break;
						 }

			case 2:{
							 printf("POP %d\n", sPop(&myStack));
							 
							 printStack(&myStack);
							 break;
						 }

			case 3:{
							 printf("PEEK %d\n", sPeek(&myStack));
							 
							 printStack(&myStack);
							 break;
						 }
			case 4:{
							 printStack(&myStack);
							 return;
							 break;
						 }
			default :{
								 break;
							 }

		}
	}
}

void printStack(Stack *pStack){
	int i;
	int size = pStack->top;

	printf("CURRENT STACK\n");
	for(i = 0; i <= size; i++)
		printf("%d ", pStack->stackArray[i]);
	printf("\n");	
}
