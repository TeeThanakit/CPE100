#include <stdio.h>
#include <unistd.h>

int	main()
{
	int	num;
	char	c;
	printf("Input ASCII code to convet: ");
	scanf("%d",&num);
	c = 32 + num;
	write(1,&c,1);
	return 0;
}
