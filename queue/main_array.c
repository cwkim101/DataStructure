/* 
 *
 * Data Structure - Queue(array)
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */

#include <stdio.h>
#include "arrayQueue.h"

void testQueue();
void printQueue();

int main(){

	testQueue();
	return 0;
}

void testQueue(){
	Queue myQueue;
	queueInit(&myQueue);

	while(1){
		printf("####################\n");
		printf("#  1. Enqueue      #\n");
		printf("#  2. Dequeue      #\n");
		printf("#  3. Peek         #\n");
		printf("#  4. Exit         #\n");
		printf("####################\n");

		int option;
		scanf("%d", &option);

		switch(option){
			case 1:{
							 int number;
							 printf("INPUT: ");
							 scanf("%d", &number);
							 qEnqueue(&myQueue, number);

							 printQueue(&myQueue);
							 break;
						 }

			case 2:{
							 printf("POP %d\n", qDequeue(&myQueue));

							 printQueue(&myQueue);
							 break;
						 }

			case 3:{
							 printf("PEEK %d\n", qPeek(&myQueue));

							 printQueue(&myQueue);
							 break;
						 }
			case 4:{
							 printQueue(&myQueue);
							 return;
							 break;
						 }
			default :{
								 break;
							 }

		}
	}
}

void printQueue(Queue *q){
	int i = q->front;

	while(1){
		i = getNextPos(i);
		if(i == q->front || i == (q->rear + 1)) break;
		printf("%d ", q->queueArray[i]);
	}
	printf("\n");
}
