#include<stdio.h>
int main ()
{
	int x,y;
	printf("Enter the value of x and y : ");
	scanf("%d%d",&x,&y);
	
	if (x==0 && y==0)
	printf("Origin");
	
	else if (y==0 && !(x==0))
	printf("On X-axis");
	
	else if (x==0 && !(y==0))
	printf("On Y-axis");
	
	else if (x>0 && y>0)
	printf("Quadrant I");
	
	else if (x<0 && y>0)
	printf("Quadrant II");
	
	else if (x<0 && y<0)
	printf("Quadrant III");
	
	else if (x>0 && y<0)
	printf("Quadrant IV");
	
	return 0;
	
}
