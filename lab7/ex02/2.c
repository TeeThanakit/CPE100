//65070503448 Thanakit
//Find max min

#include <stdio.h>

void	findmaxmin(int size);

int	main()
{
	int	n;
	scanf("%d",&n);
	findmaxmin(n);
	return 0;
}
void	findmaxmin(int size)
{
	int	max=-2147483648;
	int	min=2147483647;
	int	temp;

	int	array[size];
	for(int	i=0;i<size;i++)
		scanf("%d",&array[i]);
	for(int	i=0;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	for(int	i=0;i<size;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("%d\n%d",max,min);
}
