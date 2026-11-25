#include<stdio.h>
int main()
{
	int guard[7];
	int newRoster[7];
	int k,search;
	
	printf("Enter guard IDs for Day 1 to Day 7:\n");
	
	for (int i=0;i<7;i++)
	{
		printf("Day %d: ",i+1); scanf("%d",&guard[i]);
	}
	
	printf("Shift roster forward by how many days (1-6)? "); scanf("%d",&k);
	printf("\nDay \tOld \tNew\n");
	
	for (int i=0;i<7;i++)
	{
		newRoster[(i+k)%7]=guard[i];
	}	
	
	for (int i=0;i<7;i++)
	{
		printf("Day %d \t%d \t%d \n",i+1,guard[i],newRoster[i]);
	}	
	
	printf("\nEnter your guard ID: "); scanf("%d",&search);
	for (int i=0;i<7;i++)
	{
		if (search==newRoster[i])
		printf("Guard %d now has duty on day %d",search,i+1);
	}
	
}