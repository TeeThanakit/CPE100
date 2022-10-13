//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	num1,num2,temp;
	printf("Input first num: ");
	scanf("%d",&num1);
	printf("Input second num: ");
	scanf("%d",&num2);
	if(num1>num2)
		temp=num2;
	else
		temp=num1;
	while(num1%temp!=0||num2%temp!=0)
	{
		temp--;
	}
	printf("%d",temp);
	return 0;
}
