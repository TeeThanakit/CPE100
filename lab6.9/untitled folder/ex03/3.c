//Find hypotenuse

#include <stdio.h>

int	hypotenuse(int num1,int num2);

int	main()
{
	int Adjacent,Opposite,x;
	printf("Input Adjacent: ");
	scanf("%d",&Adjacent);

	printf("Input Opposite: ");
	scanf("%d",&Opposite);

	x=hypotenuse(Adjacent,Opposite);
	printf("The hypotenuse: %d",x);
}

int	hypotenuse(int num1,int num2)
{
	int	temp,i,count;
	i=1;
	count=0;
	temp = (num1*num1)+(num2*num2);
	while(temp>0)
	{
		temp=temp-i;
		count++;
		i+=2;
	}
	return count;
}
