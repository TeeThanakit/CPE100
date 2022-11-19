#include <stdio.h>

int	ft_Pascal(int n,int i)
{
	if(n==1||n ==0)
		return 1;
	else
		return ft_Pascal(n-1, i) + ft_Pascal(n-1, i-1);
}
int	main()
{
	int	n;
	scanf("%d",&n);
	int	count=0;
	int	i=0;
	int	j;
	
	while(i<n)
	{
		j=0;
		int x=1;
		while(j<=i)
		{
			count=ft_Pascal(i,x)/ (ft_Pascal(j,x)*ft_Pascal(i-j,x));
			printf("%d ",count);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
