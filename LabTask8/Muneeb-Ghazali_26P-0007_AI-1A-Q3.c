#include<stdio.h>
void circleinfo(float*, float*, float*);
int main()
{
	float rad,area,circf;
	printf("Enter radius: ");
	scanf("%f",&rad);
	
	if (rad<0)
	{
	printf("Radius cannot be negative.\n");
    main();
    }
	else if(rad>0)
	{
	circleinfo(&rad,&area,&circf);	
	printf("Area: %.2f\nCircumference: %.2f",area,circf);
}
}

void circleinfo(float *rad,float *area, float *circf)
{
	*area=3.1417 * (*rad * *rad);
	*circf= 2 * 3.1417 * (*rad);
}
