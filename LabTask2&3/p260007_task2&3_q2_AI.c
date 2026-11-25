#include<stdio.h>
int main ()
{
	int a,b,c;

	printf("Enter the 1st number = ");
	scanf("%d",&a);
	printf("Enter the 2nd number = ");
	scanf("%d",&b);
	printf("Enter the 3rd number = ");
	scanf("%d",&c);

	c=a;
	a=b;
	b=c;

	printf("1st Number is = %d",a);
	printf("\n2nd Number is = %d",b);
return 0;
}
	