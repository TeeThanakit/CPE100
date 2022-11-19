//65070503448 Thanakit
/*Write a program in C to find the check input number is palindrome or not using linked list.

## Try to use bidirectional linked list if u can

## https://www.geeksforgeeks.org/doubly-linked-list/*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node1
{
	char	key;
	struct	node1 *next;
};

struct node2
{
	char	key;
	struct	node2 *next;
};

struct node1 *head1=NULL;
struct node2 *head2=NULL;

void insert1(char n1)
{
	struct node1 *newNode=malloc(sizeof(struct node1));

	newNode->key = n1;
	newNode->next = head1;

	head1=newNode;
}

void insert2(char n1)
{
	struct node2 *newNode=malloc(sizeof(struct node2));

	newNode->key=n1;
	newNode->next=head2;

	head2=newNode;
}
void	ans()
{
	struct node1 *st=head1;
	struct node2 *la=head2;
	while(st != NULL)
	{
		if(st->key == la->key)
		{
			st= st->next;
			la= la->next;
		}
		else
		{
			printf("False\n");
			break;
		}
	}
	if(st == NULL)
	{
		printf("True\n");
	}
}

int	main()
{
	char	str[200];
	scanf("%s",str);

	for(int i=0;i<strlen(str);i++)
		insert1(str[i]);
	for(int i=strlen(str)-1;i>=0;i--)
		insert2(str[i]);
	ans();
	return 0;
}
