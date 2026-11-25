#include <stdio.h>
int main ()
{
	float tea_unit_price = 60.00;
	int tea_quantity = 3;

	float samosa_unit_price = 40.50;
	int samosa_quantity = 4;

	float chicken_roll_unit_price = 120.00;
	int chicken_roll_quantity = 2;

	float tea_subtotal = ( tea_quantity * tea_unit_price );
	float samosa_subtotal = ( samosa_quantity * samosa_unit_price );
	float chicken_roll_subtotal = ( chicken_roll_quantity * chicken_roll_unit_price );

	float Bill_Subtotal = ( tea_subtotal + samosa_subtotal + chicken_roll_subtotal );

	float GST = ( 0.16 * Bill_Subtotal );		//General Sales Tax 
	float FPA = ( Bill_Subtotal + GST );		//Final Payable Amount



	printf("********************** FAST CAFETERIA RECEIPT **********************\n");

	printf("Item \t\t\t Qty \t\t Unit Price (PKR) \t\t Subtotal (PKR)\n");
	printf("-------------------------------------------------------------------------\n");

	printf("Tea \t\t\t %d \t\t\t %.2f \t\t\t\t\t %.2f \n" ,tea_quantity,tea_unit_price,tea_subtotal);
	printf("Samosa \t\t\t %d \t\t\t %.2f \t\t\t\t\t %.2f \n" ,samosa_quantity,samosa_unit_price,samosa_subtotal);
	printf("Chicken Roll \t %d \t\t\t %.2f \t\t\t\t %.2f \n" ,chicken_roll_quantity,chicken_roll_unit_price,chicken_roll_subtotal);
	printf("-------------------------------------------------------------------------\n");
	
	printf("Subtotal: \t\t\t\t\t\t\t\t\t\t\t PKR %.2f \n",Bill_Subtotal);
	printf("GST (16%): \t\t\t\t\t\t\t\t\t\t\t PKR %.2f \n",GST);
	printf("-------------------------------------------------------------------------\n");

	printf("Grand Total: \t\t\t\t\t\t\t\t\t\t PKR %.2f\n" ,FPA);

	printf("\n********************** THANK YOU FOR YOUR VISIT **********************\n");
return 0;

}