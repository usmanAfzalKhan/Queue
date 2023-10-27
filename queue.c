#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "Queue.h"


void init(Queue* queue) {
    queue->head = queue->tail = NULL;
    queue->nodeCount = 0;
}

void enqueue(Queue* queue, char name[], int age) {
    Node* newNode = malloc(sizeof(Node));
    assert(newNode);
    newNode->data.age = age;
    strcpy(newNode->data.name, name);
    newNode->next = NULL;

    if (queue->nodeCount > 0) {
        queue->tail->next = newNode;
        queue->tail = newNode;
    } else {
        queue->head = queue->tail = newNode;
    }

    queue->nodeCount++;
}

int dequeue(Queue* queue) {
    if (queue->nodeCount == 0) {
        return 0; 
    } else {
        Node* temp = queue->head;
        queue->head = queue->head->next;
        free(temp);
        queue->nodeCount--;
        return 1;
    }
}

void printQueue(Queue* queue) {
    Node* current = queue->head;
    printf("\n");
    int i;
    for (i = 0; i < queue->nodeCount; i++) {
        printf("%s, %d\n", current->data.name, current->data.age);
        current = current->next;
    }
    printf("\n");
}
