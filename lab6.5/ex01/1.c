//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	n;
	scanf("%d",&n);
	int	array[n];
	for(int	i=0;i<n;i++) //input number to array
		scanf("%d",&array[i]);
	for(n=n-1;n>=0;n--) //reverse number
		printf("%d\n",array[n]);
	return 0;
}	
