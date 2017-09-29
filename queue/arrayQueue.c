/* 
 * Data Structure - Queue(array)
 *
 * Author   : ChangWook Kim
 * Modified : Sep. 29. 2017
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "arrayQueue.h"

void queueInit(Queue *q){
	q->front = 0;
	q->rear = 0;
}

int qIsEmpty(Queue *q){
	if(q->front == q->rear) return TRUE;
	else return FALSE;
}

void qEnqueue(Queue *q, int data){
	if(getNextPos(q->rear) == q->front){
		printf("Queue is FULL\n");
		exit(-1);
	}
	else{
		q->rear = getNextPos(q->rear);
		q->queueArray[q->rear] = data;
	}
}

int qDequeue(Queue *q){
	if(qIsEmpty(q)){
		printf("Queue is EMPTY\n");
		exit(-1);
	}
	else{
		q->front = getNextPos(q->front);
		return q->queueArray[q->front];
	}
}

int qPeek(Queue *q){
	if(qIsEmpty(q)){
		printf("Queue is EMPTY\n");
		exit(-1);
	}
	else
		return q->queueArray[getNextPos(q->front)];
}

int getNextPos(int pos){
	if(pos == (QUEUE_SIZE - 1)) return 0;
	else return pos+1;
}
