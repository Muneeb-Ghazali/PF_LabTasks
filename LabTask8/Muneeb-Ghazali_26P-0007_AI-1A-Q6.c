#include<stdio.h>
#include<math.h>
int solveQuadratic(double a, double b, double c, double *r1, double *r2);
int main()
{
	double a,b,c;
	double r1,r2;
	int result;
	printf("Enter a, b, c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a==0)
	{
		printf("a cannot be 0\n");
		main();
	}

	result = solveQuadratic(a,b,c,&r1,&r2);
	
	if (result==2)
	printf("Two roots: %.2lf and %.2lf",r1,r2);
	else if (result==1)
	printf("One root: %.2lf",r1);
	else if (result==0)
	printf("No real roots");
	
	
}
int solveQuadratic(double a, double b, double c, double *r1, double *r2)
{
	double d;
	d= b*b-4*(a*c);
	
	if (d>0) 
	{
		*r1= (-b+sqrt(d))/(2*a);
		*r2= (-b-sqrt(d))/(2*a);
		return 2;
	}
	else if (d==0)
	{
		*r1= (-b+sqrt(d))/(2*a);
		return 1;
	}
	else if (d<0)
	return 0;
}