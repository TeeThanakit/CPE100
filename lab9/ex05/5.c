//65070503448 Thanakit
/*You are given a 0-indexed binary string s and two integers minJump and maxJump. In the beginning, you are standing at index 0, which is equal to '0'. You can move from index i to index j if the following conditions are fulfilled:​

i + minJump <= j <= min(i + maxJump, s.length - 1), and
s[j] == '0'.
Return true if you can reach index s.length - 1 in s, or false otherwise.

# pointer and function*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_strlen(char	*t1)
{
	int	i=0;
	while(t1[i] != '\0')
	{
		i++;
	}
	//printf("%d",i);
	return	i;
}
void	check(char *n1,int min,int max,int index)
{
	int	lenght;
	//int	index=0;
	lenght=strlen(n1);
	int	i=0;
	int	count=0;
	if(min==0)
		min=1;
	if(index==lenght-1)
	{
		printf("True");
		exit(0);
	}
	i=min;
	while(i<=max)
	{
		if(index+i>lenght-1)
			break;
		if(*(n1+index+i)=='0')
		{
			check(n1,min,max,(index+i));
			count=1;
		}
		i++;
	}
}
int	main()
{
	int	min;
	int	max;
	char	binary[1000];
	char	*x=binary;
	ft_strlen(binary);
	scanf("%s%d%d",binary,&min,&max);
	if(*x == '0')
		check(binary,min,max,0);
	else
		printf("Flase");
	return 0;
}
