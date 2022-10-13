//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	i,num,count;

	i = 2;
	count = 0;

	printf("Input numbet: ");
	scanf("%d",&num);
	while(i<=num)
	{
		if(num%i==0)
			count++;
		i++;
	}
	if(count==1)
		printf("%d is a prime number",num);
	else	printf("%d is not a prime number",num);
	return 0;
}


