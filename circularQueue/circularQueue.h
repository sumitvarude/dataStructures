#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int start;
	int end;
	int typeSize;
	int length;
	void* elements;
}Queue;

Queue* create(int typeSize, int length);						

void* deQueue(Queue* queue);
int enQueue(Queue* queue ,void* element);

void* givesRear(Queue* queue);

int isEmpty(Queue* queue); 
int isFull(Queue* queue); 