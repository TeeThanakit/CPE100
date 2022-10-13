//65070503448 Thanakit
/*Write a program in C to Convert decimal to binary using function.*/

#include <stdio.h>

int	Convert2Binary(int num);
int	reverse(int num);

int	main()
{
	int	num;
	int	result;
	scanf("%d",&num);
	result=Convert2Binary(num);

	printf("%d",result);
	return 0;
}

int	Convert2Binary(int num)
{
	int	temp=1;
	int	sum=0;
	while(num>0)
	{
		if(num%2!=0)
		{
			sum=(sum*10)+temp;
			num /= 2;
		}
		else
		{
			sum *= 10;
			num /= 2;
		}
	}
	return reverse(sum);
}

int	reverse(int num)
{
	int	sum=0;
	int	temp;

	while(num>0)
	{
		temp=num%10;
		sum=(sum+temp)*10;
		num /= 10;
	}
	sum /= 10;
	return sum;
}
