//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	y=1;
	int	n;
	scanf("%d",&n);
	while(y<=n)
	{
		int	x=0;
		while(x<n-y)
		{
			printf(" ");
			x++;
		}
		x=0;
		while(x<y*2-1)
		{
			printf("*");
			x++;
		}
		printf("\n");
		y++;
	}	
	return 0;
}
