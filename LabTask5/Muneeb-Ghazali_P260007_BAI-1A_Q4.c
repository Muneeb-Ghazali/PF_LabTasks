#include<stdio.h>
int main()
{
	int students,highest,i=1;
	int pass=0,fail=0,marks=0,tmarks=0;
	float average;
	printf("Number of Students: ");
	scanf("%d",&students);
	
	while (i<=students)
	{
		
		printf("Marks of students %d: ",i);
		scanf("%d",&marks);
		tmarks+=marks;
		i++;
		
		if (marks>=50)
		pass++;
		else
		fail++;
		
		if (marks>highest)
		highest=marks;
		average=(float)tmarks/students;
	}
	printf("Passed: %d\n",pass);
	printf("Failed: %d\n",fail);
	printf("Highest: %d\n",highest);
	printf("Total: %d\n",tmarks);
	printf("Average: %.2f\n",average);
}