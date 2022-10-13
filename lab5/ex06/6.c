//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	i,num,temp,sum,num1;
	sum = 0;
	printf("Input num: ");
	scanf("%d",&num);
	num1=num;
	while(num>0)
	{
		temp=num%10;
		sum=(sum+temp)*10;
		num = num / 10;
	}
	sum /= 10;
	if(sum==num1)
		printf("%d is a palindrome number",num1);
	else
		printf("%d is not a palindrome number",num1);
	return 0;
}
