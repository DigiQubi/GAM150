#include <stdio.h>
#include "CircularQueue.h"

int main(void)
{
	Queue q;
	QueueInit(&q);

	for (int i=1;i<100;i++)
		Enqueue(&q, i);

	for (int i = 100; i>50; i--)
		Dequeue(&q, i);

	for (int i = 100; i<150; i++)
		Enqueue(&q, i);

	while (!QIsEmpty(&q))
		printf("%d ", Dequeue(&q));

	return 0;
}