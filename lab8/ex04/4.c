//65070503448 Thanakit
/*You have a list arr of all integers in the range [1, n] sorted in a strictly increasing order. Apply the following algorithm on arr:

nums

. Two players are playing a game with this array: player 1 and player 2.

Starting from left to right, remove the first number and every other number afterward until you reach the end of the list.
Repeat the previous step again, but this time from right to left, remove the rightmost number and every other number from the remaining numbers.
Keep repeating the steps again, alternating left to right and right to left, until a single number remains.*/

#include <stdio.h>

int	main()
{
	int	size;
	int	x=0;
	scanf("%d",&size);
	int	array[size];

	for(int i=0;i<size;i++)
		array[i]=++x;

	for(int	i=0;i<size;i++)
		printf("%d\n",array[i]);
	

	return 0;
}
