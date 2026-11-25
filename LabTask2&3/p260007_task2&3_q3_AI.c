#include<stdio.h>
int main ()
{
	float taxRate ;
	float salary ;

	printf("Enter the tax rate = ");
	scanf("%f",&taxRate);
	printf("Enter your salary = ");
	scanf("%f",&salary);

	float payableTax = salary*taxRate/100;
	float netSalary = salary-payableTax;

	printf("The tax ammount is %.2f %% ",payableTax);
	printf("\nThe net salary is %f",netSalary);

return 0;
}