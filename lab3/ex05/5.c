#include <stdio.h>

int	main()
{
	double	num1,num2;
	printf("Input num1: ");
	scanf("%lf",&num1);

	printf("Input num2: ");
	scanf("%lf",&num2);
	printf("The result is: %.2lf",num1*num2);
	return 0;
}
