#include <stdio.h>

struct LinkedNode// structure for linked list
{
            int data;
	    struct LinkedNode *next;
}*start = NULL;

void CreateLinkedList()
{
	LinkedNode *newNode, *current;
	printf("enter 5 numbers to create linked list\n");
	for(int i=0; i<5; i++)
	{
		newNode = (struct LinkedNode *)malloc(sizeof(LinkedNode));
		scanf("%d", &newNode->data);
		newNode->next = NULL;
		if(start == NULL)
		{
			start = newNode;
			current = newNode;
		}
		else
		{
		current->next = newNode;
		current = newNode;
		}
	}
}

void SortLinkedList()
{
	struct LinkedNode *node=NULL, *temp = NULL;
	int tempvar;//temp variable to store node data
	node = start;
	temp = node->next;//temp node to hold node data and next link
	while(node != NULL && node->next != NULL)
	{
		for(int j=0; j<5; j++)//value 5 because I am taking only 5 nodes
		{
			if(node->data > temp->data)//swap node data
			{
				tempvar = node->data;
				node->data = temp->data;
				temp->data = tempvar;
			}
			temp = temp->next;
		}
		node = node->next;
	}
}
