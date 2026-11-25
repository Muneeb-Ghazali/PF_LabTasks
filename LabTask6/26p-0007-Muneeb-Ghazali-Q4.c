#include<stdio.h>
int main()
{
	int number=2,sum,digit1;
	int pNumber=1;
	
	while(pNumber<=4)
	{
		digit1=1;
		sum=0;
		for (int i=1;i<number;i++)
		{
			if (number%i==0)
			{
				sum +=i;
			}
		}
		if(sum==number)
		{
			printf("%d is a perfect number\n",number);
			
			for (int i=1;i<number;i++)
			{
				if (number%i==0)
				{
					if (digit1==0)
					{
						printf("+");
					}
						printf("%d",i);
						digit1=0;
				}
			}
			printf("=%d\n",number);
			pNumber++;
		}
		number++;
	}

}