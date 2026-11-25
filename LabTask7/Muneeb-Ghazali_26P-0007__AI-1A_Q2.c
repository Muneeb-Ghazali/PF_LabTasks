#include<stdio.h>
#include<math.h>

//Category 3 = No arguments, returns a value
int main ()
{
	double a,b;
	printf("Enter side a: ");
	scanf("%lf",&a);
	printf("Enter side b: ");
	scanf("%lf",&b);
	
	double hypotenuse = sqrt( pow(a, 2)+pow(b, 2) );
	double area = (a*b)/2;
	
	printf("Hypotenuse: %.2f\n",hypotenuse);
	printf("Rounded Up: %.0f\n",ceil(hypotenuse));
	printf("Rounded Down: %.0f\n",floor(hypotenuse));
	printf("Area: %.2f\n",area);
	return 0;
}