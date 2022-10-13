/*(Temperature Conversions) Implement the following integer functions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit 
temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius 
temperature.
c) Use these function to write a program that prints charts showing the
Fahrenheit equivalents of all Celcius temperatures from 0 to 100 degrees
, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212
degrees. Print the outputs in a tabular for mat that minimizes the number
of lines of output while remaining readable.*/
//65070503448 Thanakit

#include <stdio.h>

double fahrenheit(double celsius);
double celsius(double fahrenheit);


int main(void)
{
    int num;

    printf("\nCelsius Fahrenheit  |  Fahrenheit Celsius\n");
    for (num=0;num<=(212-32);num++) 
    {
	if(num<=100) 
	{
	    printf("%7d %10.2f", num,fahrenheit(num));
	    printf("  |  ");
	} 
	else 
	{
	    printf("                    |  ");
	}

	printf("%10d %7.2f\n",num+32,celsius(num+32));

    }
    printf("\n");


    return 0;

}

double celsius(double fahrenheit)
{
    return ((5.0 / 9.0) * (fahrenheit - 32.0));

}

double fahrenheit(double celsius)
{
    return ((9.0 / 5.0) * celsius + 32);

}
