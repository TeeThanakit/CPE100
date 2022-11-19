//65070503448 Thanakit
/*Write a program in C to find the worker income using struct.
Output: ->Each line: worker name, income (salary* [1-(work absent count/total work)])*/

#include <stdio.h>

struct workers
{
	char	name[50];
	int	income;
	char	check[50];
};
int	ft_strlen(char *n1)
{
	int	i=0;
	//printf("5\n");
	while(n1[i] != '\0')
	{
		i++;
	}
	return i;
}
int	findday(char *n1,int lenght)
{
	int	i=0;
	int	countwork=0;
	//printf("6\n");
	while(i<lenght)
	{
		if(n1[i] == 89)
			countwork++;
		i++;
	}
	/*if(lenght == countwork)
		return 1;
	else*/
		return countwork;
}
void	findans(struct workers *n,int size)
{
	//printf("3\n");
	int	temp;
	int	lenght=0;
	int	countwork=0;
	for(int	i=0;i<size;i++)
	{
		//printf("4\n");
		lenght=ft_strlen(n[i].check);
		//printf("Lenght is %d\n",lenght);
		temp=n[i].income/lenght;
		countwork=findday(n[i].check,lenght);
		//printf("Count work is %d\n",countwork);
		if(lenght == countwork)
			printf("%s %d\n",n[i].name,n[i].income);
		else
			printf("%s %d\n",n[i].name,temp*countwork);
	}
}
int	main()
{
	int	size;
	scanf("%d",&size);
	struct workers w[size];
	//printf("1\n");
	for(int	i=0;i<size;i++)
	{
		scanf("%s%d%s",w[i].name,&w[i].income,w[i].check);
	}
	//printf("2\n");
	findans(w,size);
	return 0;
}
