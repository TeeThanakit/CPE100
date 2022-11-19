#include <stdio.h>

struct	sleep
{
	int	hh;
	char	as1[2];
	int	mm;
	char	as2[2];
	int	ss;
};

int	main()
{
	int	wa;
	int	sl;
	int	wa1;
	int	sl1;
	int	wa2;
	int	sl2;
	struct	sleep w[3];
	for(int	i=0;i<2;i++)
		scanf("%d%s%d%s%d",&w[i].hh,w[i].as1,&w[i].mm,w[i].as2,&w[i].ss);
	wa=w[1].hh;
	sl=w[0].hh;
	wa1=w[1].mm;
	sl1=w[0].mm;
	wa2=w[1].ss;
	sl2=w[0].ss;

	if((wa-sl>=7&&wa-sl<=10)&&(wa1-sl1==0)&&(wa2-sl2==0))
		printf("True");
	else if((wa-sl>=10)&&((wa1-sl1>0)||(wa2-sl2>0)))
		printf("False");
	return 0;
}
