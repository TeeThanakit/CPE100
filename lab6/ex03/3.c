//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	n,i;
	scanf("%d",&n);
	int	array[n];
	array[0]=1;
	array[1]=1;
	n --;
	i=2;
	printf("1 1 ");
	while(i<=n)
	{
		array[i]=array[i-1]+array[i-2];
		printf("%d ",array[i]);
		i++;
	}
	return 0;
}
