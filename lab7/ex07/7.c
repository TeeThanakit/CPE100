//65070503448 Thanakit
/*Write a program in C to find nth Fibonacci term using function.

# Fibonacci : a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers. The simplest is the series 1, 1, 2, 3, 5, 8, etc.*/

#include <stdio.h>

void	findfibo(int num)
{
	int	f1,f2,temp;
	f1=1;
	f2=1;
	int	i=2;
	while(i<num)
	{
		temp=f1+f2;
		f1=f2;
		f2=temp;
		i++;
	}
	printf("%d",temp);
}
int	main()
{
	int	num;
	scanf("%d",&num);

	if(num==1 || num==2)
	{
		printf("1");
	}
	else
		findfibo(num);
	return 0;
}
