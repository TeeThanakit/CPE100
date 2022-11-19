//65070503448 Thanakit
/*Given an array with n objects,0 1 and 2, sort them in place so 

You must solve this problem without using the library's sort function.

# use linked list*/

#include <stdio.h>
#include <stdlib.h>

struct	node
{
	int	key;
	struct node *next;
};

struct node *head = NULL;

void	link(int *key)
{
	struct node *newNode=malloc(sizeof(struct node));
	newNode->key = *key;
	newNode->next = head;
	head = newNode;
}
void sortLinkedList()
{
	struct node *node=NULL,*temp=NULL;
	int tempvar;//temp variable to store node data
	node = head;
	//temp = node;//temp node to hold node data and next link
	while(node != NULL)
	{
		temp=node;
		while(temp->next != NULL)//travel till the second last selment
		{
			if(temp->key > temp->next->key)//compare the data of the nodes
			{
				tempvar=temp->key;
				temp->key=temp->next->key;//swap the data
				temp->next->key=tempvar;
			}
			temp=temp->next;//move to the next element
		}
		node=node->next;//move to the next node
	}
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

int	main()
{
	int	size;
	scanf("%d",&size);
	int	arr[size];
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<size;i++)
		link(&arr[i]);
	sortLinkedList();
	printList();
	return 0;
}
