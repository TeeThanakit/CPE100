//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	num,i,count,j,row,pt;

	i = 2;
	row = 0;
	printf("Input number: ");
	scanf("%d",&num);
	while(i<num)
	{
		j = 1;
		count = 0;
		while(j<i)
		{
			if(i%j==0)
				count++;
			j++;
		}
		if(count == 1)
		{
			printf("%d ", i);
			row++;
			pt++;
		}
		if(row % 10 == 0)
		{
			printf("\n");
			row /= 10;
		}
		i++;
	}
	if(pt<10)
	{
		printf("\n");
		printf("--------");
	}
	return 0;
}
