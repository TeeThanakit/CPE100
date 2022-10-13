#include <stdio.h>

int	main()
{
	int	num,temp,sum;
	sum=0;
	printf("Input num: ");
	scanf("%d",&num);
	while(num>0)
	{
		temp=num%10;
		sum=sum*10+temp;
		num/=10;
	}
	printf("Thr reverse is %d",sum);
	return 0;
}

