/*Write C program to check whether an array is a subset of another array.

# Subset meaning set A is a subset of another set B if all elements of the set A are elements of the set B

# Assume : No duplicate element

True if the second array is a subset of the first array*/

#include <stdio.h>

int	main()
{
	int	big,small;
	int	size1;
	scanf("%d",&size1);
	int	arr[size1];
	for(int i=0;i<size1;i++)
		scanf("%d",&arr[i]);
	
	int	size2;
	scanf("%d",&size2);
	int	arr2[size2];
	for(int i=0;i<size2;i++)
		scanf("%d",&arr2[i]);
	
	if(size1>size2)
	{
		big=size1;
		small=size2;
	}
	else
	{
		big=size2;
		small=size1;
	}
	int count=0;
	for(int i=0;i<small;i++)
	{
		for(int j=0;j<big;j++)
		{
			if(arr[i]==arr2[j])
				count=1;
		}
	}
	if(count==1)
		printf("True");
	else
		printf("False");
	return 0;
}
