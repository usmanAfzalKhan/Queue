#include "queue.h"
#include <stdio.h>
int main(int argc, char *argv){
	Queue tims;
	init(&tims);
	enqueue(&tims, "Mary", 20);
	enqueue(&tims, "Tom", 22);
	enqueue(&tims, "Ann", 25);
	enqueue(&tims, "John", 18);
	printf("Original Queue: ");
	printQueue(&tims);
	dequeue(&tims);
	printf("Dequeue: ");
	printQueue(&tims);
	
	
	return 0;
}
