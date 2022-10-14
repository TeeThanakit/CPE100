//65070503448 Thanakit
/*Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

# use pointer and function
CPE-!ABC -> CBA-!EPC
Testing-=Km!utt -> ttumKgn-=it!seT */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return 1;
	return 0;
}
void	reverse(char *n1,char *n2,int num)
{
	int	i=0;
	char	temp;
	if(num%2 != 0)
		num++;
	while (i < num/2)
	{
		if(ft_isalpha(*n1) + ft_isalpha(*n2) == 2)
		{
			temp = *n1;
			*n1 = *n2;
			*n2 = temp;
			n1++;
			n2--;
		}
		else if(ft_isalpha(*n1) == 0)
			n1++;
		else
			n2--;
		i++;
	}
}
int	main()
{
	char	str[100];
	int	i=-1;
	scanf("%s",str);

	while(str[++i])
	reverse(str,str+i-1,i);
	printf("%s",str);
	return 0;
}
