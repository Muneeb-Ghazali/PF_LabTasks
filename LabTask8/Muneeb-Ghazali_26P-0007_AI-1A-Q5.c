	#include<stdio.h>
void showBalance(float *);
void deposit(float *, float );
int withdraw(float *, float);
int main()
{
	int choice,amount,withdrawamount;
	float balance=5000;
	printf("----- BANK ACCOUNT -----\n1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
	do{
		printf("Choice: ");
		scanf("%d",&choice);
		if (choice==1)
		{
			showBalance(&balance);
		}
		else if (choice==2)
		{
			printf("Amount: ");
			scanf("%d",&amount);
			deposit(&balance,amount);
			printf("...\n");
		}
		else if (choice==3)
		{
			printf("Withdraw Amount: ");
			scanf("%d",&withdrawamount);
			withdraw(&balance,withdrawamount) ? printf("Withdrawn\n...\n"):printf("Insufficient balance.\n...\n");
		}
		else if (choice==4)
		{
			printf("GoodBye!");
			break;
		}
	}while (choice>0 && choice<=4);
}

void showBalance(float *balance)
{
	printf("Balance: Rs %.2f\n...\n",*balance);
}

void deposit(float *balance, float amount)
{
	if (amount<=0)
	printf("Invalid Amount\n");
	else
	*balance+=amount;
	
}

int withdraw(float *balance, float amount)
{
	if (amount<0 || amount>*balance) return 0;
	
	*balance-=amount;
	return 1;
}