#include<stdio.h>
void showMenu(void);
int readNonNegative(void);
void printLine (int);
long power (int, int);
long factorial(int );
int gcd (int ,int);
int lcm (int,int);

//Category 3 = No arguments, returns a value
int main()
{
	showMenu();
	readNonNegative();
}

//Category 1 = No arguments, no return
void showMenu(void)
{
	printf("----- MINI MATH TOOLKIT -----\n1. Power\n2. Factorial\n3. GCD and LCM\n4. Exit\n");
}

//Category 3 = No arguments, returns a value
int readNonNegative(void)
{
	int choice;
	do {
		printf("Choice: ");
		scanf("%d",&choice);
		if (choice<0 || choice>4)
		printf("Invalid choice.\n...\n");
		
		if(choice==1)
		{
			int base,exp;
			printf("Enter a non-negative base: ");
			scanf("%d",&base);
			printf("Enter a non-negative power: ");
			scanf("%d",&exp);
			printLine (10);
			printf("%d ^ %d = %d\n",base,exp,power (base, exp));
			printLine (10);
			printf("...\n");
		}
		
		if(choice==2)
		{
			int num;
			printf("Enter a non-negative number: ");
			scanf("%d",&num);
			printLine (10);
			printf("%d! = %d\n",num,factorial(num));
			printLine (10);
			printf("...\n");
		}
		
		if(choice==3)
		{
			int num1,num2;
			printf("Enter a non-negative number: ");
			scanf("%d",&num1);
			printf("Enter a non-negative number: ");
			scanf("%d",&num2);
			printLine (10);
			printf("GCD = %d\n",gcd(num1, num2));
			printf("LCM : %d\n",lcm (num1, num2));
			printLine (10);
			printf("...\n");
		}
		
		if(choice==4)
		printf("Goodbye!");
		
	}while (choice!=4);
}

//Category 2 = Arguments, no return value
void printLine (int length)
{
	for (int i=1;i<=length;i++)
	{
		printf("- ");
	}
	printf("\n");
}

//Category 4 = Arguments, returns a value
long power (int base, int exp)
{	
	long power=1;
	for (int i=1;i<=exp;i++)
	{
		power*=base;
	}
	return power;
}

//Category 4 = Arguments, returns a value
long factorial(int n)
{
	long fact=1;
	for (int i=1;i<=n;i++){
	fact*=i;
}
	return fact;
}

//Category 4 = Arguments, returns a value
int gcd (int a,int b)
{
	while(b!=0)
	{
		int s=a%b;
		a=b;
		b=s;
	}
	return a;
}

//Category 4 = Arguments, returns a value
int lcm (int a,int b)
{
	int lcm;
	lcm = (a*b)/gcd(a, b);
	return lcm;
}