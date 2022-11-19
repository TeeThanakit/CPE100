//65070503448 Thanakit
/*Write a program in C to find the student's grades (A, B, C, D, F) in a given array using struct.
Each line: Student name, score, and grade.
### order by score, if same score order by input
A : 80-100
B : 70-79
C : 60-69
D : 50-59
F : 50>  */

#include <stdio.h>

struct Students
{
	int	Mid;
	int	Final;
	int	Work;
	char	name[50];
};

void	printStudents(struct Students Student)
{
	printf("%d\n",Student.Mid);
	printf("%d\n",Student.Final);
	printf("%d\n",Student.Work);
}
void	*ft_strcpy(char	*dest,char *src)
{
	int	i=-1;
	while(src[++i] != '\0')
		dest[i]=src[i];
	dest[i]='\0';
	return dest;
}
void	swapname(char *n1,char *n2)
{
	char	temp[50];
	ft_strcpy(temp,n1);
	ft_strcpy(n1,n2);
	ft_strcpy(n2,temp);
}
void	swapscore(int *n1,int *n2)
{
	int	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
void	sorting(struct Students *std,int size)
{
	char	*name;
	char	*s1;
	char	*s2;
	char	*s3;
	int	temp;
	//printf("2\n");
	for(int	i=0;i<size-1;i++)
	{
		for(int	j=0;j<size-i-1;j++)
		{
			if(std[j].Final<std[j+1].Final)
			{
				swapscore(&std[j].Final,&std[j+1].Final);
				swapname(std[j].name,std[j+1].name);
			}
		}
	}		
	for(int	i=0;i<size;i++)
	{
		printf("%s ",std[i].name);
		printf("%d ",std[i].Final);
		if(std[i].Final>=80)
			printf("A");
		else if(std[i].Final>=70)
			printf("B");
		else if(std[i].Final>=60)
			printf("C");
		else if(std[i].Final>=50)
			printf("D");
		else	printf("F");
		printf("\n");
	}
}
int	main()
{
	int	size;
	//char	name[50];
	scanf("%d",&size);
	struct Students std[size];

	for(int	i=0;i<size;i++)
	{
		scanf("%d %d %d %s",&std[i].Mid,&std[i].Final,&std[i].Work,std[i].name);
		std[i].Final=std[i].Mid + std[i].Final + std[i].Work;
	}
	/*for(int i=0;i<size;i++)
	{
		printf("%d\n",std[i].Final);
	}*/
	//printf("1\n");
	sorting(std,size);

	return 0;
}
