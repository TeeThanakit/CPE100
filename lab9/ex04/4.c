//65070503348 Thanakit
/*Given a fixed-length integer array , duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

# use pointer and function*/

#include <stdio.h>

void	shift(int *n1,int *n2)
{
	*n1=*n2;
}
int	main()
{
	int	size;
	int	countzero=0;
	int	lastpo;

	scanf("%d",&size);
	int	array[size];

	for(int i=0;i<size;i++)
		scanf("%d",&array[i]);
	
	for(int	i=0;i<size;i++)
	{
		int	tempsize=size;
		if(array[i]==0)
		{
			lastpo=i;
			while(lastpo<tempsize)
			{
				shift(&array[tempsize-1],&array[tempsize-2]);
				tempsize--;
			}
			array[lastpo]=0;
			i++;
		}
	}
	for(int	i=0;i<size;i++)
		printf("%d\n",array[i]);
	return 0;
}
