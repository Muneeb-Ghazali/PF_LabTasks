#include<stdio.h>
int main()
{
	char symbol;
	printf("Enter a Symbol: ");
	scanf("%c",&symbol);
	
	for (int i=5;i>=1;i--)
	{
		for (int j=5;j>=i;j--)
		{
			printf("%c",symbol);
		}
		printf("\n");
	}
	
	
	for (int i=1;i<=5;i++)
	{
		for (int j=5;j>=i;j--)
		{
			printf("%c",symbol);
		}
		printf("\n");
	}
}