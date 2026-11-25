#include<stdio.h>
void welcome(void);
void printSquare(int,char);

//Category 3 = No arguments, returns a value
int main()
{
	int side;
	char character;
	welcome();
	
	printf("Enter Side: ");
	scanf("%d",&side);
	printf("Enter Character: ");
	scanf(" %c",&character);
	
	printSquare(side, character);
	welcome();
}
//Category 1: no arguments, no return value
void welcome (void)
{
	printf("===================================\n\tPattern Printer v1.0\n===================================\n");
}

//Category 2: arguments, no return value
void printSquare(int side, char ch)
{
	for (int i=1;i<=side;i++)
	{
		for (int j=1;j<=side;j++)
		{
			printf("%c ",ch);
		}
		printf("\n");
	}
}