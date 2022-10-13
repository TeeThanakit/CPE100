//65070503448 Thanakit
#include <stdio.h>

int	main()
{
	int	a,b,c,temp;
	printf("Input 3 sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		temp=a;
		a=c;
		c=temp;
	}
	else if(b>a && b>c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if(a+b>c)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}

