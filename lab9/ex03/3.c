//65070503448 Thanakit
/*Given an array with n objects,0 1 and 2, sort them in place so 

You must solve this problem without using the library's sort function.

# use pointer and function*/

#include <stdio.h>

void	swap(int *n1,int *n2)
{
	int	temp;
	temp=*n2;
	*n2=*n1;
	*n1=temp;
}
int	main()
{	
	int	temp;
	int	size;
	scanf("%d",&size);
	int	array[size];
	for(int i=0;i<size;i++)
		scanf("%d",&array[i]);
	for(int	i=0;i<size;i++)
	{
		for(int	j=0;j<size-1;j++)
		{
			if(array[i]<array[j]) // 2<1
			{
				swap(&array[i],&array[j]);
				/*temp=array[j];
				array[j]=array[i];
				array[i]=temp;*/
			}
		}
	}
	for(int i=0;i<size;i++)
		printf("%d\n",array[i]);
	return 0;
}
