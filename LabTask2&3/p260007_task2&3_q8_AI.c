 #include<stdio.h>
int main ()
{
	float num;
	printf("Enter a number between -1000 and 1000 ");
	scanf("%f",&num);

	int convertedValue =(float) num ;

	printf("The original value is %.2f \n",num);
	printf("The converted value %d",convertedValue);

return 0;

}