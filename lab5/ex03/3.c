//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	num,count1,count2,p;
	count1=0;
	count2=0;
	printf("Input num: ");
	scanf("%d",&num);
	for(int i=1;i<num/2;i++)
	{
		count1=0;
		count2=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count1++;
			}
		}
		if(count1==2)
		{
			p=num-i;
			for(int	k=1;k<=p;k++)
			{
				if(p%k==0)
				{
					count2++;
				}
			}
			if(count2==2)
			{
				printf("%d = %d + %d\n",num,i,p);
			}
		}
	}
	return 0;
}
