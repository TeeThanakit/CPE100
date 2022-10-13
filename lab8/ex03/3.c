//65070503448 Thanakit
/*Write a program in C to check whether a given number is the power of 2, 3, and 4 or not using a recursive function.*/

#include <stdio.h>
#include <math.h>

int	checkispow2(int	num, int i)
{
	i=i*2;
	if(i<num)
		return checkispow2(num, i);
	else if(i==num)
		return (num);
	else
		return (0);
}

int	checkispow3(int num,int i)
{
	i=i*3;
	if(i<num)
		return checkispow3(num, i);
	else if(i==num)
		return (num);
	else
		return (0);
}

int	checkispow4(int num, int i)
{
	i=i*4;
	if(i<num)
		return checkispow4(num, i);
	else if(i==num)
		return (num);
	else
		return (0);
}

void	print(int num)
{
	if(num!=0)
		printf("True\n");
	else
		printf("False\n");
}
int	main()
{
	int	num;
	int	pow2,pow3,pow4;

	scanf("%d",&num);
	if(num<0)
		num *= -1;
	if(num!=1)
	{
		print(checkispow2(num, 1));
		print(checkispow3(num,1));
		print(checkispow4(num,1));
	}
	else if(num==1)
	{
		printf("True\n");
		printf("True\n");
		printf("True\n");
	}
	return 0;
}
