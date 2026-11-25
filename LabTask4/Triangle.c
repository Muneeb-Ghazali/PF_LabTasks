#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("Enter the 3 side of triangle ");
	scanf("%d%d%d",&a,&b,&c);
	
	if( (a+b>c) || (b+c>a) || (c+a>b) )
	
	if (a==b && b==c)
	printf("Equilateral Triangle ");
	
	else if (a==b || b==c || c==a)
	printf("Isoceles Triangle");
	
	else if (!(a==b && b==c))
	printf("Scalene Triangle");
	
	else
	printf("Not a Valid Triangle");
	
	return 0;
	
}
