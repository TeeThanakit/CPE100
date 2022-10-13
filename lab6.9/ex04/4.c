//Temperature Conversion

#include<stdio.h>

double ConvertCelsius2Fahren(int num1);

double ConvertFahren2Celsius(int num1);

int	main()
{
	printf("Celsius  Fahrenheit  |  Fahrenheit Celsius");
	for(int	celsius=0;celsius<=100;celsius++)
	{
		double x=0.0;
		x=ConvertCelsius2Fahren(celsius);
		printf("%d Celsius = %.2lf Fahrenheit\n",celsius,x);
	}

	for(int Fahrenheit=32;Fahrenheit<=212;Fahrenheit++)
	{
		double x=0.0;
		x=ConvertFahren2Celsius(Fahrenheit);
		printf("%d Fahrenheit = %.2lf Celsius\n",Fahrenheit,x);
	}
	return 0;
}

double ConvertCelsius2Fahren(int num1)
{
	double F;
	F=((9.0*num1)/5)+32;
	return F;
}

double ConvertFahren2Celsius(int num1)
{
	double C;
	C=((3.0*num1)-160)/9;
	return C;
}
