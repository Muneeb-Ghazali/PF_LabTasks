#include<stdio.h>
float toFahrenheit (float);
float toCelsius (float);
void printTable(int, int, int);

//Category 3 = No arguments, returns a value
int main()
{
	int start,end,step;
	printf("Start: ");
	scanf("%d",&start);
	printf("End: ");
	scanf("%d",&end);
	printf("Steps: ");
	scanf("%d",&step);
	printTable(start, end, step);
	
	float fahrenheit;
	printf("\n\nEnter a tempurature in Fahrenheit: ");
	scanf("%f",&fahrenheit);
	printf("%.1f F = %.2f C",fahrenheit,toCelsius(fahrenheit));
	
}

//Category 4 = Arguments, returns a value
float toFahrenheit (float c)
{
	return ((c*9/5)+32);
}

//Category 4 = Arguments, returns a value
float toCelsius (float f)
{
	return ((f-32)*5/9);
}

//Category 2 = Arguments, no return value
void printTable(int start, int end, int step)
{
	printf("Celsius \t Fahrenheit");
	for (int i=start;i<=end;i=i+step)
	{
		printf("\n\t%d \t %.2f",i,toFahrenheit(i));
	}
}