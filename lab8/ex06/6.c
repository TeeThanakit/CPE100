//65070503448 Thanakit
/*Write a program in C to move the array (step up 1 time) from the given array using the function passed by reference.
*/

#include <stdio.h>

void	stepUp(int *n1,int *n2)
{
	int	temp;
	*n2=*n1;

}
int	main()
{
	int	size;
	int	x;

	scanf("%d",&size);
	int	array[size];

	for(int	i=0;i<size;i++)
		scanf("%d",&array[i]);
	
	/*for(int	i=0;i<size;i++)
		stepUp(array[i]);*/
	x=array[0];

	for(int i=1;i<size;i++)
		stepUp(&array[i],&array[i-1]);
	array[size-1]=x;

	for(int	i=0;i<size;i++)
		printf("%d\n",array[i]);
	return 0;
}
