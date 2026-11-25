#include<stdio.h>
int main()
{
	float score[7];
	float sum=0.0,highest=0.0,lowest=10.0,finalscore;
	int perfect=0;
	
	for (int i=0;i<7;i++)
	{
		printf("Judge %d score: ",i+1); scanf("%f",&score[i]);
		sum+=score[i];
		
		if(score[i]>highest)
		highest=score[i];
		
		if (score[i]<lowest)
		lowest=score[i];
		
		finalscore=(sum-highest-lowest)/5;
	}
	printf("Highest score dropped: %.1f \n",highest);
	printf("Lowest score dropped: %.1f \n",lowest);
	printf("Final score: %.2f \n",finalscore);
	
	for (int i=0;i<7;i++)
	{
		if (score[i]==10){
			perfect=1;
			printf("Judge %d gave a perfect 10!\n",i+1);
		}
	}
	if (perfect==0) printf("No Judge gave a perfect");
}