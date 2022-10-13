//65070503448 Thanakit
/*A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

[1, 2, 3, ..., n] contains a total of n! unique permutations.

For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
Given an integer n, return True or false that given number is good digits or not*/

#include <stdio.h>

int	checkeven(int *n1)
{
	int	temp=*n1;
	if(temp%2!=0)
		return 1;
	else
		return 0;
}

int	checkisprime(int *n2)
{
	int	j=1;
	int	xx=*n2;
	int	count1=0;
	while(j<xx)
	{
		if(xx%j==0)
			count1++;
		j++;
	}
	if(count1 != 1)
		return 0;
	return 1;
}
int	main()
{
	int	num;
	int	temp;
	int	size=0;
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		num /= 10;
		size++;
	}
	int	array[size];
	int	i=0;
	while(temp>0)
	{
		array[i]=temp%10;
		temp /= 10;
		i++;
	}
	/*for(int i=0;i<size;i++)
		printf("%d\n",array[i]);*/
	
	int	check;
	i=0;
	for(;i<size;i+=2)
	{
		check=checkeven(&array[i]);
		if(check==0)
			break;
	}
	
	int	x;
	int	j=1;
	for(;j<size;j+=2)
	{
		x=checkisprime(&array[i]);
		if(x==0)
			break;
	}
	if(j+i==size+1)
		printf("True");
	else
		printf("False");
	return 0;
}

