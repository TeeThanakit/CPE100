//65070503448 Thanakit
/*Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

# use pointer and function
CPE-!ABC -> CBA-!EPC
Testing-=Km!utt -> ttumKgn-=it!seT */

#include <stdio.h>

void	reverse(char *n1,char *n2,int num)
{
	char	t1=*n1;
	char	t2=*n2;
	int	i=0;
	if((t1[i] >= '65' && t1[i] <= 90) || (t1[i] >= '97' && t1[i] <= '122')
}
int	main()
{
	char	array[100];
	int	lenght=0;
	int	i=-1;
	scanf("%s",array);

	while(array[++i])
		lenght++;
	
	return 0;
}
