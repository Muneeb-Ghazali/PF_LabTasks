#include<stdio.h>
int main ()
{
	int hoursTravelled ;
	float distanceTravelled ;

	printf("Enter number of hours travelled = \n");
	scanf("%d",&hoursTravelled);
	printf("Enter the distance travelled = \n");
	scanf("%f",&distanceTravelled);

	float avgSpeed = distanceTravelled/hoursTravelled ;
	printf("The avg speed of the distance %.2f km in %d hours is = %.2f km/h",distanceTravelled,hoursTravelled,avgSpeed); 

return 0;
}