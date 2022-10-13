//65070503448 Thanakit
/*Write a program in C to find the Hailstone sequence starting with a given number using a recursive function.*/
#include <stdio.h>

int	Hailstone(int x)
{
	int	temp;
	if(x%2!=0)
	{
		temp=(3*x)+1;
		printf("%d\n",temp);
		x=(3*x)+1;
	}
	else
	{
		temp= x/2;
		printf("%d\n",temp);
		x /= 2;
	}
	if(x>1)
		return Hailstone(x);
	else
		return 1;
}

int	main()
{
	int	num;
	int	temp;
 
	temp=0;
	scanf("%d",&num);
	printf("%d\n",num);
	if(num!=1)
		Hailstone(num);
	return 0;
}
