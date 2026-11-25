#include <stdio.h>
int main ()
{
	int a = 67;
	char b = 'M';
	float c = 3.141590;
	double d = 98.765432;

	printf("Type Name\tVariable Value\t Size in Memory\n------------------------------------------------------\n");

	printf("Char \t\t%c \t\t\t\t\t%d",b,sizeof(char));
	printf("\nInt \t\t%d \t\t\t\t\t%d",a,sizeof(int));
	printf("\nFloat \t\t%f \t\t\t%d",c,sizeof(float));
	printf("\nDouble \t\t%.2f \t\t\t\t%d",d,sizeof(double));

	printf("\n----------------------------------------------------- \n");
return 0;

}