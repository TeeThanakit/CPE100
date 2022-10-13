#include <stdio.h>

//Computing Rim Area of the Flat Washer

double calc_area(double radius); //Declare this to use fucntion

int	main()
{
	double extRadius,intRadius,extArea,intArea;

	printf("External Radius: ");
	scanf("%lf",&extRadius);

	printf("Internal Radius: ");
	scanf("%lf",&intRadius);

	extArea=calc_area(extRadius);
	intArea=calc_area(intRadius);

	double washerArea=extArea-intArea;

	printf("The area of the washer is %lf.\n",washerArea);
	return 0;
}

double calc_area(double radius)
{
	double PI=3.1415932;
	return PI*radius*radius;
}
