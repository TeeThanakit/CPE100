//65070503448 Thanakit
/*Write a program in C to print the smallest number possible by concatenating all digits in an array using function.*/

#include <stdio.h>

void	findSmallest(int num)
{
	int	array[num];
	int	countzero=0;
	int	temp;

	for(int i=0;i<num;i++)
		scanf("%d",&array[i]);

	for(int i=0;i<num;i++) //count how many zero in array
	{
		if(array[i]==0)
			countzero++;
	}

	for(int i=0;i<num;i++) //sort array increasing order
	{
		for(int j=0;j<num-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(int i=0;i<countzero;i++)
	{
		temp=array[i+1];
		array[i+1]=array[i];
		array[i]=temp;
	}
	for(int	i=0;i<num;i++)
		printf("%d",array[i]);
}
int	main()
{
	int	size;
	scanf("%d",&size);
	findSmallest(size);
	return 0;
}
