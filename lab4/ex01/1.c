//65070503448 Thanakit

#include <stdio.h>
#include <unistd.h>

int	main()
{
	char	c;
	printf("Input: ");
	scanf("%c",&c);
	if(c>=48&&c<=57)
		printf("Digits");
	else if((c>=65&&c<=90) || (c>=97&&c<=122))
		printf("Alphabet");
	else
		printf("Special character");
	return 0;
}
