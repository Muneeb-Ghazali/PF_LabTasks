#include<stdio.h>
int main()
{
	int roll [6];
	int marks [6]; 
	int temp,rtemp;
	
	for(int i=0;i<6;i++)
	{
		printf("Student %d - roll no and marks: ",i+1);	scanf("%d%d",&roll[i],&marks[i]);
	}
	printf("\nRank \tRoll \tMarks\n");
	
	for (int i=0;i<6;i++)
	{
		for (int j=i+1;j<6;j++)
		{
			if (marks[i]<marks[j])
			{
				temp= marks[i];
				marks[i] = marks[j];
				marks[j]= temp;
				
				rtemp = roll[i];
				roll[i] = roll[j];
				roll[j] = rtemp;
			}
		}
		printf("   %d \t  %d \t   %d \n",i+1,roll[i],marks[i]);
	}
	printf("\nPosition holders:\n");
	printf("1st: Roll %d (%d marks)\n",roll[0],marks[0]);
	printf("2nd: Roll %d (%d marks)\n",roll[1],marks[1]);
	printf("3rd: Roll %d (%d marks)\n",roll[2],marks[2]);
	
}

