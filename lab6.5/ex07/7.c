#include <stdio.h>

int	main()
{
	int	n,i;
	scanf("%d",&n);
	int	array[n];
	for(int	i=0;i<n;i++)//input number to array
		scanf("%d",&array[i]);
	for(int	i=0;i<n-1;i++) //check wheater that number is peak
	{
		if(array[i+1]>array[i]&&array[i+1]>array[i+2])
		{
			printf("%d",i+1);
			break;
		}
	}
	return 0;
}
