//65070503448 Thanakit
#include <stdio.h>

int	main()
{
	int	n,result;
	result = 0;
	printf("Input n: ");
	scanf("%d",&n);
	int	array[n];
	for(int	i=0;i<n;i++)
		array[i]=i+1;
	for(int	i=0;i<n;i++)
		result = result + array[i];
	printf("Summation from 1 to %d is %d ",n,result);
	return 0;
}
