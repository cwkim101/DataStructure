/* 
 * Data Structure - Stack
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#define TRUE 1
#define FALSE 0
#define STACK_SIZE 100

typedef struct _arrayStack{
	int stackArray[STACK_SIZE];
	int top;
} ArrayStack;

typedef ArrayStack Stack;

void stackInit(Stack *);
int sIsEmpty(Stack *);

void sPush(Stack *, int);
int sPop(Stack *);
int sPeek(Stack *);
