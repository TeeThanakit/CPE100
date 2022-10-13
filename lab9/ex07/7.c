//65070503448 Thanakit
/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in First array order.*/

#include <stdio.h>

void	intersec(int *n1,int *n2)
{
	int	t1=*n1;
	int	t2=*n2;
	if(t1==t2)
		printf("%d\n",t1);
}
int	main()
{
	int	size1;
	int	size2;

	scanf("%d",&size1);
	int	array1[size1];
	for(int	i=0;i<size1;i++)
		scanf("%d",&array1[i]);
	
	scanf("%d",&size2);
	int	array2[size2];
	for(int	i=0;i<size2;i++)
		scanf("%d",&array2[i]);
	
	for(int	i=0;i<size1;i++)
	{
		for(int	j=0;j<size2;j++)
		{
			intersec(&array1[i],&array2[j]);
		}
	}
	return 0;
}
