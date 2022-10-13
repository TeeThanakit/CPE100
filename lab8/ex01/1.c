//65070503448 Thanakit
/*Write a program in C to find the least common multiple number in given numbers using a recursive function.*/

// a*b=gcd(a,b)*lcm(a,b)
#include <stdio.h>

int	gcd(int	x,int y)  //x>y
{
	if(x==0)
		return y;
	else
		return gcd(y%x,x);
}

int	main()
{
	int	temp,num1,num2,LCM;
	scanf("%d%d",&num1,&num2);
	if(num1==0 || num2==0)
		printf("ERROR");
	else if(num1<num2)
	{
		temp=num2;
		num2=num1;
		num1=temp;
		LCM=(num1*num2)/gcd(num1,num2);
		printf("%d",LCM);
	}
	else
	{
		LCM=(num1*num2)/gcd(num1,num2);
		printf("%d",LCM);
	}
	/*LCM=(num1*num2)/gcd(num1,num2);
	printf("%d",LCM);*/
	return 0;
}
