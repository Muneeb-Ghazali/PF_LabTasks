#include <stdio.h>
int main ()
{
	double loan = 250000.00;  //Principal Loan Amount
	float rate = 8.5;	  //Annual Interest Rate
	int time = 3;		  //Loan Period in Years

	float SI =  (loan * rate * time)/100.0;  //Simple Interest
	float TPA = loan + SI;			 //Total Payable Amount
	float MI = TPA/(time * 12.0);		 //Monthly Installment

	printf("*************** BANK LOAN INTEREST SUMMARY ***************\n");

	printf("Principal Amount: \t\t PKR %.2f ",loan);
	printf("\nAnnual Interest Rate: \t %.2f%%",rate);
	printf("\nLoan Duration: \t\t\t %d Years",time);

	printf("\n-----------------------------------------------------------\n");

	printf("Total Accrued Interest: \t PKR %.2f",SI);
	printf("\nTotal Payable Amount: \t\t PKR %.2f",TPA);
	printf("\nMonthly Installment: \t\t PKR %.2f",MI);

	printf("\n-----------------------------------------------------------\n");

return 0;
}