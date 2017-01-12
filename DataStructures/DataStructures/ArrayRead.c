#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

int main(void)
{
	Node* head = (Node*)malloc(sizeof(Node));
	Node* tail = head;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	while (1)
	{
		printf("Input nature num: ");
		scanf("%d", &readData);
		if (readData < 1)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		tail->next = newNode;
		tail = newNode;
	}
	puts("");

	printf("Print all of the data!\n");
	if (head == tail)
	{
		printf("It doesn't exist at all.");
	}
	else
	{
		cur = head;
		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	if (head == tail)
	{
		return 0;
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d is deleted.\n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}