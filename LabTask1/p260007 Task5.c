#include <stdio.h>
int main ()
{
	float celsius = 37.5;
	float Fahrenheit = (celsius * 9.0/5.0) + 32.0;
	float Kelvin = celsius + 273.15;

	printf("*************** TEMPERATURE CONVERSION ***************\n");
	printf("----------------------------------------------------- \n");

	printf("Temperature in Celsius: \t %.2f C",celsius);
	printf("\nTemperature in Fahrenheit: \t %.2f F",Fahrenheit);
	printf("\nTemperature in Kelvin: \t\t %.2f K",Kelvin);

	printf("\n----------------------------------------------------- \n");
return 0;
}