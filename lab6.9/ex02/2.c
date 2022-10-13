//Ex Pass-by-value and Pass-by-Reference

#include <stdio.h>

void swapThemByVal(int num1,int num2)
{
	int	temp=num1;
	num1=num2;
	num2=temp;
	printf("Inside swapThemByVal %d, %d\n",num1,num2);
}

void swapThemByRef(int	*num1,int	*num2)
{
	int	temp=*num1;
	*num1=*num2;
	*num2=temp;
	printf("Inside swapThemByRef %d, %d\n",*num1,*num2);
}

int	main()
{
	int	integer1=5;
	int	integer2=10;

	printf("The original values %d, %d\n",integer1,integer2);
	swapThemByVal(integer1,integer2);
	printf("After swapThemByVal %d, %d\n",integer1,integer2);
	swapThemByRef(&integer1,&integer2);
	printf("After swapThemByRef %d, %d\n",integer1,integer2);
}
