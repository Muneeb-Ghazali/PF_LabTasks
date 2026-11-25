#include<stdio.h>
int main()
{
	int lapPri,curSav,monSav,mon;
	printf("Laptop price: ");
	scanf("%d",&lapPri);
	printf("Current savings: ");
	scanf("%d",&curSav);
	printf("Monthly saving: ");
	scanf("%d",&monSav);
	if (curSav>=lapPri)
	printf("0 months");

	while(curSav<=lapPri)
	{
	mon++;
	curSav+=monSav;
	printf("Month %d: savings = %d\n",mon,curSav);
	}
	printf("Sara can buy laptop after %d month",mon);
}n