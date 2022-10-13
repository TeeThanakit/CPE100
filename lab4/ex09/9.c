//65070503448 Thanakit

#include<stdio.h>

int main()
{
	int	num;
	printf("Input num of row: ");
	scanf("%d",&num);

	int	i,k;
	i=1;
	while(i<=num)
	{
		k=i;
		while(k<num)
		{
			printf(" ");
			k++;
		}
		int	j=1;
		while(j<=i)
		{
			printf("%d ",i);
			j++;
		}
		printf("\n");
		i++;
	}
	return	0;
}
