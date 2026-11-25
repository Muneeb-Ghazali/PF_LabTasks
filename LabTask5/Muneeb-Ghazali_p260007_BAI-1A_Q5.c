#include<stdio.h>
int main()
{
	int quantity,cost,currentBill;
	int choice=0,items=0,bill=0;
	int tea=60,samosa=40,sandwich=180;
	int discount = 0;
	
	printf("\t--------------------------------\t\t\n\tChoice\tItem\tPrice(Rs)\n\t--------------------------------\n\t 1\tTea\t\t60\n\t 2\tSamosa\t\t40\n\t 3\tSandwich\t180\n\t 4\tCheckout\t--\n\t--------------------------------\n");
	
	while (choice!=4)
	{
		printf("Enter choice: ");
		scanf("%d",&choice);

		
		if (choice==1)
		{
			printf("Quantity: ");
			scanf("%d",&quantity);
			
			currentBill=quantity*tea;
			bill =bill+currentBill;
			items=items+quantity;
			
			printf("Current Bill: %d\n",bill);
			printf("...\n");
			
		}
		else if (choice==2)
		{
			printf("Quantity: ");
			scanf("%d",&quantity);
			
			currentBill=quantity*samosa;
			bill =bill+currentBill;
			items=items+quantity;
			
			printf("Current Bill: %d\n",bill);
			printf("...\n");
		}
		else if (choice==3)
		{
			printf("Quantity: ");
			scanf("%d",&quantity);
			
			currentBill=quantity*sandwich;
			bill =bill+currentBill;
			items=items+quantity;    
			
			printf("Current Bill: %d\n",bill);
			printf("...\n");
			          
		}
		else if (choice<1 || choice>4)
		{
			printf("Invalid choice. Try agian\n...\n");
			printf("\t--------------------------------\t\t\n\tChoice\tItem\tPrice(Rs)\n\t--------------------------------\n\t 1\tTea\t\t60\n\t 2\tSamosa\t\t40\n\t 3\tSandwich\t180\n\t 4\tCheckout\t--\n\t--------------------------------\n");
		}
	}

		if (bill>1000)
		{
			discount=bill/10;
			bill-=discount;
		}
	
		printf("\nTotal items: %d\n",items);
		printf("Bill: Rs %d\n",bill);
		printf("Discount: Rs %d\n",discount);
		printf("Payable: Rs %d\n",bill);
}