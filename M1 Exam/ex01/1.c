//65070503448 Thanakit
/*Write a program in C to find the Mean, Mode, and Standard deviation in a given array.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int	main()
{
	int	size;
	int	summation=0;
	float	mean;
	scanf("%d",&size);
	int	arr[size];
	int	tarr[size];
	int	mode[size];
	int	x=-1;
	int	lenght=0;
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		tarr[i]=arr[i];
		summation += arr[i];
	}
	mean=((float)summation)/size;
	printf("%.2f\n",mean);

	/*########## Find mode ##########*/
	for(int i=0;i<size;i++)
	{
		int	count=0;
		for(int j=0;j<size;j++)
		{
			if(arr[i]==tarr[j])
			{
				count++;
				tarr[j]=0;
			}	
		}
		if(count>1)
		{
			mode[++x]=arr[i];
			lenght++;
		}
	}
	/*while(mode[lenght] != '\0')
		lenght++;*/
	//lenght=strlen(mode);
	if(lenght<3)
	{
		int	i=0;
		while(i<lenght)
		{
			printf("%d ",mode[i]);
			i++;
		}
		printf("\n");
	}
	else
		printf("NONE\n");
	/*########## Find SD ##########*/
	int	np=0;
	float	sumsd,di,sd;
	sumsd=0.0;
	di=0.0;
	for(int i=0;i<size;i++)
	{
		np=(arr[i]-mean)*(arr[i]-mean);
		sumsd += np;
	}
	sd=sqrt(sumsd/size);
	printf("%.2f",sd);
	return 0;
}
