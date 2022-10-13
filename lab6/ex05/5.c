//65070503448 Thanakit

#include<stdio.h>

int	main()
{
	int	num,i,j;
	
	i = 2;
	j = -1;
    	scanf("%d", &num);

    	while(num!=1)
    	{
        	if(num%i==0)
       	 	{	
			j++;
			if(j!=0)
			{
				printf("*");
			}
            		printf("%d", i);
            		num = num / i;       	
		}
        	else
		{
			i++;
		}
    }
}
