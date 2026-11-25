#include<stdio.h>
int main()
{
	int n,x,k;
	int power,factorial;
	float s=0;
	
	printf("Enter the value for n: ");
	scanf("%d",&n);
	printf("Enter the value for x: ");
	scanf("%d",&x);
	
	for (k=0;k<=n;k++)
	{
		//POWER Loop
		power=1;
		for (int i=1;i<=k;i++)
		{
			power *=x;
		}
		//FACTORIAL Loop
		factorial=1;
		for (int j=1;j<=k;j++)
		{
			factorial*=j;
		}
		s+=power/factorial;
	}
		printf("%.1f",s);
}