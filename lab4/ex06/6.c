//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	double	num,sum,result;
	sum = 0.0;
	int	count= 0;
	printf("Input number: ");
	while(1)
	{
		scanf("%lf",&num);
		if(num==0)
			break;
		sum = sum + num;
		count=count+1;
	}
	result = sum / count;
	printf("Average is %.2lf",result);
	return 0;
}
