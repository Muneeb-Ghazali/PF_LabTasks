#include <stdio.h>
int main ()
{
	float radius = 7.5;
	float pi =3.14159;

	float Diameter = ( 2 * radius );
	float Circumference = ( 2 * pi * radius );
	float Area = ( pi * radius * radius );

	printf("*************** CIRCLE GEOMETRY REPORT ***************\n");
	printf("----------------------------------------------------- \n");

	printf("Given Radius: \t\t\t\t%.3f cm",radius);
	printf("\nCalculated Diameter: \t\t%.3f cm",Diameter);
	printf("\nCalculated Circumference: \t%.3f cm",Circumference);
	printf("\nCalculated Area: \t\t\t%.3f sq.cm",Area);

	printf("\n----------------------------------------------------- \n");
return 0;
}