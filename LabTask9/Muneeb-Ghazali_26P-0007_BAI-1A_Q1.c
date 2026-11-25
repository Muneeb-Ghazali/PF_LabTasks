#include<stdio.h>
int main()
{
	int runs [6];
	int tot =0, best= 0, over = 0;
	
	
	for (int i=0;i<6;i++)
	{
		printf("Runs in over %d: ",i+1); scanf("%d",&runs[i]);
		
		if (runs[i]>best){
		best = runs [i];
		over=i+1;
	}
		tot +=runs[i];
	}

	float runRate= (float)tot/6;
	
	printf("\nTotal runs: %d\n",tot);
	printf("Run Rate: %.2f per over\n",runRate);
	
	printf("Best over: Over %d with %d runs\n",over,best);
	
	if (tot>60) printf("The team reached the target of 60 and won\n");
	else printf("Needed %d more runs to reach 60\n",60-tot);

	return 0;
}
