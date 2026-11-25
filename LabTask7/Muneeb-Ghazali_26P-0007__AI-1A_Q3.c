#include<stdio.h>
int readUnits(void);
float calculateBill(int);

//Category 3 = No arguments, returns a value
int main ()
{
	int unit=readUnits();
	calculateBill(unit);
}

//Category 3 = No arguments, returns a value
int readUnits(void)
{
	int consumedUnit;
	while (1)
	{
		printf("Enter unit consumed: ");
		scanf("%d",&consumedUnit);
		
		if (consumedUnit<0)
		printf("Units cannot be negative.\n");
		
		else if (consumedUnit>0)
		{
			printf("Units consumed: %d\n",consumedUnit);
			return consumedUnit;
		}
		
	} 
}

//Category 4 = Arguments, returns a value
float calculateBill(int units)
{	
	if (units<=100){
	units*=10;
	printf("Total bill: Rs %.2f",(float)units);
	return units;
}
	else if (units>100&&units<=300){
	units*=15;
	printf("Total bill: Rs %.2f",(float)units);
	return units;
}
	else if (units>300){
	units*=20;
	printf("Total bill: Rs %.2f",(float)units);
	return units;
}
}