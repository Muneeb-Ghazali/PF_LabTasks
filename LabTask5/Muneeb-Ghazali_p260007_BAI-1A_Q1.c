#include<stdio.h>
int main()
{
	int runs;
	int boundary=0,dball=0,truns=0;
	for (int i=1;i<=6;i++)
{
	printf("Ball %d runs: ",i);
	scanf("%d",&runs);
	truns=truns+runs;
	
	if(runs==4||runs==6)
	boundary++;

	else if (runs==0)
	dball++;
}
	printf("Total RUNS = %d\n",truns);
	printf("Total BOUNDARYS: %d\n",boundary);
	printf("Total DOT BALLS: %d\n",dball);
}