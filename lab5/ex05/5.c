//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	i,n,sum,previous,temp;
	sum = 1;
	previous = 1;
	printf("Input num: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) //n=5
	{
		if(i==0)
			printf("1 ");
		else
		{
			printf("%d ", sum);
			temp = sum;
			sum = sum + previous;
			previous = temp;
		}
	}
	return 0;
}
