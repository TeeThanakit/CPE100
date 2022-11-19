#include <stdio.h>

void	ft_remove(int *n1,int *n2,int n,int i)
{
	if(i<n)
	{
	int	count=0;
	for(int j=0;j<n;j++)
	{
		if(n1[i]==n2[j])
		{
			count++;
			n2[j]=0;
			if(n2[j]==0)
				break;
		}
	}
	if(count>0)
		printf("%d\n",n2[i]);
	}
	i++;
	return ft_remove(n1,n2,n,i);
	
}
int	main()
{
	int	n;
	scanf("%d",&n);
	int	arr[n];
	int	temp[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		temp[i]=arr[i];
	}
	ft_remove(arr,temp,n,0);
	return 0;
}
