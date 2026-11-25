#include <stdio.h>
int main ()
{
	float PF_Marks= 88.0;		//Programming Fundamentals Marks & Credit Hours
	int PF_Credit_Hours = 3;

	float CAG_Marks =  76.5;	//Calculus & Analytical Geometry Marks And Credit Hours
	int CAG_Credit_Hours = 3;

	float AP_Marks = 82.0;		//Applied Physics Marks And Credit Hours
	int AP_Credit_Hours = 2;

	float TWS = (88.0 * 3) + (76.5 * 3) + (82.0 * 2);	//Total Weighted Score
	int TCH = 3 + 3 + 2 ;				//Total Credit Hours 
	float WAP = TWS / TCH;					//Weighted Average Percentage

	printf("*************** SEMESTER ACADEMIC REPORT ***************\n");

	printf("Course \t\t\t\t\t\tCredit Hours \t Obtained Marks");

	printf("\n-----------------------------------------------------------\n");

	printf("Programming Fundamentals \t %d \t\t\t\t %.2f",PF_Credit_Hours,PF_Marks);
	printf("\nCalculus \t\t\t\t\t %d \t\t\t\t %.2f",CAG_Credit_Hours,CAG_Marks);
	printf("\nApplied Physics \t\t\t %d \t\t\t\t %.2f",AP_Credit_Hours,AP_Marks);

	printf("\n-----------------------------------------------------------\n\n");

	printf("*************** TOTAL SEMESTER ACADEMIC REPORT ***************\n\n");

	printf("Total Weighted Score:   %.2f   \nTotal Credits:  \t\t%d   \nWeighted Average: \t \t%.2f%%" ,TWS,TCH,WAP);

	printf("\n-----------------------------------------------------------\n");

return 0;
}