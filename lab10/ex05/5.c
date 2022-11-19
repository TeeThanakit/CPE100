//65070503448 Thanakit
/*Write a program in C to read n number of values and display it in reverse order, using Linked list.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Record
struct node
{
	int key;
	struct node *next;
};

// Global Variables
struct node *head = NULL;

void insertFirst(int *key)
{
	struct node *newNode = malloc( sizeof(struct node) );
	newNode->key = *key;
	newNode->next = head;
	head = newNode;
}

void printList()
{
	struct node *ptr; // Temporary pointer
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n",ptr->key);
		ptr = ptr->next;
	}
}

int main()
{
	int	size;
	scanf("%d",&size);
	int	arr[size];
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<size;i++)
		insertFirst(&arr[i]);
    /*insertFirst(7);
    insertFirst(5);
    insertFirst(3);
    insertFirst(1);
    insertFirst(4);*/

    printList();

    return 0;
}
