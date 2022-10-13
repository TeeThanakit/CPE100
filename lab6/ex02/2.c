//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	n,result;
	result = 1;
	scanf("%d",&n);
	int	array[n];
	for(int	i=0;i<n;i++)
	{
		array[i]=i+1;
	}
	while(n>=1)
	{
		result = result * array[n-1];
		n--;
	}
	printf("%d",result);
	return	0;
}
