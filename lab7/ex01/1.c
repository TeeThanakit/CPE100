//65070503448 Thanakit
//Write a program in C to find prime numbers in a given range using function

#include <stdio.h>

int	findisprime(int	num);

int	main()
{
	int	num1,num2;
	int	temp=0;
	int	x=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	while(num1<=num2)
	{
		temp=findisprime(num1);
		if(temp!=1)
		{
			printf("%d\n",temp);
			x++;
		}
		num1++;
	}
	if(temp==1&&x==0)
		printf("None");
}

int	findisprime(int	num)
{
	int	i=1;
	int	count=0;
	while(i<=num)
	{
		if(num%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
		return num;
	else
		return 1;
}
