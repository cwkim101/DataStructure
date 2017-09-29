/* 
 * Data Structure - Queue(array)
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#define TRUE 1
#define FALSE 0
#define QUEUE_SIZE 101

typedef struct _circularQueue{
	int front;
	int rear;
	int queueArray[QUEUE_SIZE];

} CircularQueue;

typedef CircularQueue Queue;

void queueInit(Queue *);
int qIsEmpty(Queue *);

void qEnequeue(Queue *, int);
int qDequeue(Queue *);
int qPeek(Queue *);
