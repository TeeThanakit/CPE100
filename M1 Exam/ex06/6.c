/*Write C program to split the input array into the Odd and Even array.

Output: 

First Line : Odd array

Second Line : Even array

## If any Odd or/and Even array not have any element print None
*/
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
		if(arr[i]%2 != 0)
		{
			printf("%d ",arr[i]);
			count++;
		}
	}
	if(count==0)
		printf("None");
	printf("\n");
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
			count++;
		}
	}
	if(count==0)
		printf("None");
	return 0;
}
