#include <stdio.h>

int main() 
{
	int a = 368;
	
	int quarter = a/25;
	int r1 = quarter%25;
	
	int dime = r1/10;
	int r2 = dime%10;
	
	int nickel = r2 %5 ;
	
	int rp = a % 5;
	
	printf("368 pennies in quarter are %d ",r1);
	printf("\n368 pennies in dime are %d ",r2);
	printf("\n368 pennies in nickel are %d ",nickel);
	printf("\nPennies are %d ",rp);
}