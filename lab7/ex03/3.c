//65070503448 Thanakit
/*Write a program in C to find all perfect numbers in a given range using function.
# perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.*/

#include <stdio.h>

int	checkisperfect(int num);

int	main()
{
	int	num1,num2;
	int	temp;
	int	count=0;

	scanf("%d",&num1);
	scanf("%d",&num2);
	while(num1<=num2)
	{
		temp=checkisperfect(num1);
		if(temp!=0)
		{
			printf("%d\n",num1);
			count++;
		}
		num1++;
	}
	if(count==0)
		printf("None");
	return 0;
}

int	checkisperfect(int num)
{
	int	i=1;
	int	sum=0;

	while(i<=num/2)
	{
		if(num%i==0)
		{
			sum=sum+i;
			i++;
		}
		else
			i++;
	}
	if(sum==num)
		return num;
	else	
		return 0;
}
