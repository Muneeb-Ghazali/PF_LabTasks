#include <stdio.h>
int main ()
{
	float kg,height,BMI;
	
	printf("Enter your weight in Kilogram = ");
	scanf("%f",&kg);
	printf("Enter your Height in Meters = ");
	scanf("%f",&height);
	
	BMI = kg/(height*height);
	
	if (BMI<18.5)
	printf("Underweight");
	
	else if (BMI>=18.5 && BMI<25)
	printf("Normal");
	
	else if (BMI>=25 && BMI>30)
	printf("Overweight");
	
	else if (BMI>=30)
	printf("Obese");
	
	return 0;
	
}
