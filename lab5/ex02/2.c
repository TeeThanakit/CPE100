#include <stdio.h>

int	main()
{
	int	num,i,sum;
	sum = 0;
	printf("Input number: ");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum = sum + i;
	}
	if(num==sum)
		printf("%d num is a perfect number",num);
	else
		printf("%d num is not a perfect number", num);
	return 0;
}
