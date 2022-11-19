#include <stdio.h>

int	ft_Pascal(int n)
{
	if(n==1 ||n ==0)
		return 1;
	else
		return ft_Pascal(n- 1)*n;
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
		while(j<=i)
		{
			count=ft_Pascal(i)/ (ft_Pascal(j)*ft_Pascal(i-j));
			printf("%d ",count);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
