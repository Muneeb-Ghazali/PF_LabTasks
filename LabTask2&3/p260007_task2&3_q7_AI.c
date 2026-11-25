#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter 1st subject marks = ");
	scanf("%d",&a);

	printf("Enter 2nd subject marks = ");
	scanf("%d",&b);

	printf("Enter 3rd subject marks = ");
	scanf("%d",&c);

	float avgMarks = (float) a+b+c/3;
	int totalMarks = a+b+c;

	printf("The Total marks is %d\nThe avg marks is %f ",totalMarks,avgMarks);
}