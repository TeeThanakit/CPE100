//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	num,sum,temp,i;

	temp = 9;
	i = 1;
	sum=0;
	printf("Input number: ");
	scanf("%d",&num);
	while(i<=num)
	{
		sum=sum+temp;
		temp=(temp*10)+9;
		i++;
	}
	printf("Result is %d",sum);
	return 0;
}
