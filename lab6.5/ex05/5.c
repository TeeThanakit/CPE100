#include <stdio.h>

int	main()
{
	int	n,temp,count;
	scanf("%d",&n);

	int	array[n];
	int	temparray[n];

	for(int	i=0;i<n;i++) //input number to array
		scanf("%d",&array[i]);
	for(int	i=0;i<n;i++) //dupicate the first array
		temparray[i]=array[i];

	for(int	i=0;i<n;i++) //sort number increasing order
	{
		for(int	j=0;j<n-1;j++)
		{
			if(array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for(int	i=1;i<n;i++)//find the second smallest number
	{
		if(array[i]!=array[i-1])
		{
			printf("%d\n",array[i]);
			count=i;
			break;
		}
	}
	for(int	i=0;i<n;i++) //find index of second smallest
	{
		if(temparray[i]==array[count])
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
