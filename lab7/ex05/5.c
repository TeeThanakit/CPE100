//65070503448 Thanakit

/*Write a program in C to check whether two given arrays are an anagram or not using function.
# Anagram : a word, phrase, or name formed by rearranging the letters of another, such as cinema, formed from iceman.*/

#include <stdio.h>

int	ft_strcmp(int num1,int num2);

int	main()
{
	int	size1,size2;
	int	temp;

	scanf("%d",&size1);
	int	array1[size1];
	for(int i=0;i<size1;i++)
		scanf("%d",&array1[i]);

	scanf("%d",&size2);
	int	array2[size2];
	for(int i=0;i<size2;i++)
		scanf("%d",&array2[i]);
	
	for(int	i=0;i<size1;i++) //Sort increasing order(array1)
	{
		for(int j=0;j<size1-1;j++)
		{
			if(array2[j]>array2[j+1])
			{
				temp=array1[j];
				array1[j]=array1[j+1];
				array1[j+1]=temp;
			}
		}
	}

	for(int	i=0;i<size2;i++) //Sort increasing order(array2)
	{
		for(int j=0;j<size2-1;j++)
		{
			if(array2[j]>array2[j+1])
			{
				temp=array2[j];
				array2[j]=array2[j+1];
				array2[j+1]=temp;
			}
		}
	}
	int	x;
	int	i=0;
	int	count=0;
	while(i<size1)
	{
		x=ft_strcmp(array1[i],array2[i]);
		if(x==0)
			count++;
		i++;
	}
	if(count==0)
		printf("True");
	else
		printf("False");
	return 0;
}

int	ft_strcmp(int num1,int num2)
{
	if(num1==num2)
		return 1;
	else
		return 0;
}
