/* 
 * Data Structure - Stack(linked list)
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#define TRUE 1
#define FALSE 0

typedef struct _node{
	int value;
	struct _node *next;	
} Node;

typedef struct _listStack{
	Node *head;
} ListStack;

typedef ListStack Stack;

void stackInit(Stack *);
int sIsEmpty(Stack *);

void sPush(Stack *, int);
int sPop(Stack *);
int sPeek(Stack *);
