#ifndef QUEUE_H
#define _QUEUE_H

typedef struct{
	int age;
	char name[20];
}Data;

typedef struct node_def{
	Data data;
	struct node_def *next;	
}Node;

typedef struct{
	Node *head;
	Node *tail;
	int nodeCount;
}Queue;

void init(Queue*);
void enqueue(Queue*, char[], int);
void printList(Queue*);
int dequeue(Queue*);

#endif
