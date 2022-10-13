//Temperature Conversion

#include<stdio.h>

double ConvertCelsius2Fahren(int num1);

double ConvertFahren2Celsius(int num1);

int	main()
{
	printf("Celsius  Fahrenheit  |  Fahrenheit Celsius");
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
