//65070503448 Thanakit

#include <stdio.h>

int	main()
{
	int	n;
	scanf("%d",&n);
	int	array[n];

	for(int	i=0;i<n;i++)//input number to array
		scanf("%d",&array[i]);
	for(int	i=0;i<n;i++) //check the same number
	{
		int	count=0;
		for(int	j=0;j<n;j++)
		{
			if(array[i]==array[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d\n",array[i]);
		}
	}
	return 0;
}
