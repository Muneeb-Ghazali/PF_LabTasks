#include<stdio.h>
int main()
{
	int pin ;
	int attempts=3;
	
	while (attempts>0)
	{
	printf("Enter PIN: ");
	scanf("%d",&pin);
	attempts--;
	
	if (pin==4321)
	{
		printf("Access Granted");break;
	}
	if (pin!=4321)
	{
		printf("%d attempt(s) left\n",attempts);
	}

	if (attempts==0)
	printf("Card blocked. Plese contact your bank");
	}
}