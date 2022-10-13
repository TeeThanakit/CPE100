//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	max,n,temp,index;
	max = -2147483648;
	scanf("%d",&n);
	int	array[100]={0};
	for(int	i=0;i<n;i++)
		scanf("%d",&array[i]);
	temp = 0;
	for(int i=0;i<n;i++)
	{
		if(temp<array[i])
		{
			temp=array[i];
			index = i;
		}
	}
	printf("%d\n%d",temp,index);
	return 0;
}
