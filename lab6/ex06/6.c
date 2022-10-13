//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	i,num[30];
	for(i=0;i<30;i++)
	{
		num[i]=i+1;
	}
	printf("     SEPTEMBER 2022\n");
	printf(" S  M  T  W  T  F  S\n");
	printf("            ");
	for(int	i=0;i<30;i++)
	{
		if((num[i]+3)%7==0)
			printf("\n");
		if(num[i]<10)
			printf(" ");
		printf("%d ",num[i]);
	}
	return 0;
}
