#include <stdio.h>
int main ()
{
	double basic_salary = 85000.00;

	float HRA = (0.20 * basic_salary);		//House Rent Allowance
	float MA = (0.10 * basic_salary);		//Medical Allowance
	float GS = basic_salary + HRA + MA;		//Gross Salary
	float ITD = (0.05 * GS);			//Income Tax Deduction
	float NS = GS - ITD;				//Net Salary

	printf("*************** MONTHLY SALARY SLIP ***************\n");

	printf("Basic Salary: \t\t\t\t\t PKR %.2f",basic_salary);
	printf("\nHouse Rent Allowance (20%): \t PKR %.2f",HRA);
	printf("\nMedical Allowance (10%): \t\t PKR %.2f",MA);

	printf("\n-----------------------------------------------------------\n");

	printf("Gross Salary: \t\t\t\t PKR %.2f",GS);
	printf("\nTax Deduction (5%): \t\t PKR %.2f",ITD);

	printf("\n-----------------------------------------------------------\n");

	printf("Net Payable Salary: \t\t PKR %.2f",NS);

	printf("\n-----------------------------------------------------------\n");
return 0;
}