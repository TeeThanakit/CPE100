#include <stdio.h>

int	main()
{
	int	n,temp1;
	scanf("%d",&n);
	int	array[n];
	int	temp[n];
	for(int	i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		temp[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		for(int	j=0;j<n-1;j++)
		{
			if(array[i]<array[j])
			{
				temp1=array[i];
				array[i]=array[j];
				array[j]=temp1;
			}
		}
	}
	for(int	i=0;i<n;i++)
	{
		int	count=1;
		for(int	j=1+i;j<n-1;j++)
		{
			if(array[i]==array[j])
			{
				count++;
				temp[j]=0;
			}
		}
		if(temp[i]!=0)
			temp[i]=count;
	}
	for(int	i=0;i<n;i++)
	{
		if(temp[i]!=0)
			printf("%d %d\n",array[i],temp[i]);
	}
	return 0;
}
