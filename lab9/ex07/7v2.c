//65070503448 Thanakit
/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in First array order.*/

#include <stdio.h>

void	intersec(int *n1,int *n2,int size1,int size2)
{
	int	temp;
	int	mv=0;
	for(int i=0;i<size1;i++)
	{
		int	count=0;
		while(mv>0)
		{
			n2--;
			mv--;
		}
		for(int j=0;j<size2;j++)
		{
			if(*n1==*n2)
			{
				count++;
				*n2=0;
				if(count>1)
					*n2=0;
			}
			/*if(count>1)
			{
				temp=*n1;
				printf("%d\n",temp);
			}*/
			mv++;
			n2++;
		}
		if(count != 0)
		{
			temp=*n1;
			printf("%d\n",temp);
		}
		n1++;
	}
	/*int	i;
	while(temparr[i] != '\0')
		printf("%d",temparr[i]);*/
}
int	main()
{
	int	size1;
	scanf("%d",&size1);
	int	arr1[size1];
	for(int i=0;i<size1;i++)
		scanf("%d",&arr1[i]);

	int	size2;
	scanf("%d",&size2);
	int	arr2[size2];
	for(int i=0;i<size2;i++)
		scanf("%d",&arr2[i]);
	
	int	temp;
	/*if(size1>=size2)
		temp=size1;
	else
		temp=size2;*/
	//int arr1[]={1,2,3,4};
    	//int arr2[]={3,4,5,6};
	intersec(arr1,arr2,size1,size2);
	return 0;
}
