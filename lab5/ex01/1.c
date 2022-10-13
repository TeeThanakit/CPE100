//6507003448 Thanaki

#include <stdio.h>
#include <math.h>
int	main()
{
	int	num,n,temp,sum,n1;
	printf("Input binary number: ");
	scanf("%d",&num);
	n = 0;
	n1=num;
	sum = 0;
	while(num>0)
	{
		if(num%10 != 0)
		{
			temp = (1* pow(2,n));
			sum = sum + temp;
			num /= 10;
		}
		else
		{
			temp = 0;
			sum = sum + temp;
			num /= 10;
		}
		n++;
	}
	printf("%d base 2 is %d base 10",n1,sum);
	return 0;
}
