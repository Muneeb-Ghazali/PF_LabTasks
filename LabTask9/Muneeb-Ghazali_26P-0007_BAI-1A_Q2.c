#include<stdio.h>
int main ()
{
	int lockers[10];
	int search,found=0,empty=0,highest=0;
	
	
	printf("Enter item code in each locker (0 = empty):\n");
	
	for (int i=0;i<10;i++)
	{
		printf("Locker %d:",i+1); scanf("%d",&lockers[i]);
		if (lockers[i]>highest)
		highest=lockers[i];
	}
	
	printf("\nEnter item code to search: "); scanf("%d",&search);
	if (search>highest) printf("Item %d is not in any locker\n",search);
	
	for (int i=0;i<10;i++)
	{
		if (lockers[i]==search) {
		found++;
		printf("Item %d is in locker %d\n",search,i+1);
	}
		if (lockers[i]==0)
		empty++;
	}
	printf("Total lockers with this item: %d\n",found);
	printf("Empty lockers: %d",empty);
	
	
	return 0;
}