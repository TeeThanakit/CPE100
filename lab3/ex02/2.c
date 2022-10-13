#include <stdio.h>

int	main()
{
	float	h,t,g=10;
	printf("Input the time that use for drop: ");
	scanf("%f",&t);

	h = 0.5*g*t*t;
	printf("The height of the rock is: %f",h);
	return 0;
}
