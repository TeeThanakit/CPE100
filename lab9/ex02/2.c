//65070503448 Thanakit
/*Write a program in C to print a string in reverse using a pointer and function.*/

#include <stdio.h>

void	ft_reverse(char *s,int	num)
{
	while(num>0)
	{
		printf("%c",s[num-1]);
		num--;
	}
}
int	main()
{
	char	arr[100];
	int	lenght=0;
	scanf("%s",arr);
	int	i=0;
	while(arr[i] != '\0')
		i++;
	//printf("%d",i);
	ft_reverse(arr,i);
	return 0;
}
