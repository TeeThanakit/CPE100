#include <unistd.h>
#include <stdio.h>
int	main()
{
	int	num;
	char	c;
	printf("Input ASCII code: ");
	scanf("%d",&num);
	c = num;
	write(1,&c,1);
}
