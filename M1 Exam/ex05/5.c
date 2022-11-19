//65070503448 Thanakit
/*Write C program to move all zeroes to the end of a given array.
An array with the same order but 0 is shifted to the end.*/

#include <stdio.h>

int	main()
{
	int	n;
	scanf("%d",&n);
	int	arr[n];
	int	count=0;
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			printf("%d\n",arr[i]);
			count++;
		}
	}
	for(int i=0;i<n-count;i++)
		printf("0\n");
	return 0;
}
