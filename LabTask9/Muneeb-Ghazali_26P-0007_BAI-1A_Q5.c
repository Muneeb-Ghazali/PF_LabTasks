#include<stdio.h>
int main()
{
	int people[7];
	int forged=0,genuine=7;
	
	for (int i=0;i<7;i++)
	{
		printf("Ticket of person %d: ",i+1);	scanf("%d",&people[i]);
	}
	printf("\n--- GATE REPORT ---\n");
	
	for (int i=0;i<7;i++)
	{
		for (int j=0;j<=i-1;j++)
		{
			if (people[i]==people[j])
			{
				printf("FORGED: person %d used ticket %d, already used by person %d\n",i+1,people[i],j+1);
				forged++;
				genuine--;
				break;
			}
		}
	}
	printf("Genuine: %d, Forged: %d",genuine,forged);
	
	
}