//65070503448 Thanakit
/*Write a program in C to Calculate the length of the string using a pointer and function.*/

#include <stdio.h>

void	ft_strlen(char *s)
{
	int	lenght=0;
	for(int	i=0;s[i] != '\0';i++)
		lenght++;
	printf("%d",lenght);
	//return lenght;
}

int	main()
{
	char	arr[100];
	scanf("%s",arr);
	int	temp;
	ft_strlen(arr);
	//printf("%d",temp);
	return 0;
}
