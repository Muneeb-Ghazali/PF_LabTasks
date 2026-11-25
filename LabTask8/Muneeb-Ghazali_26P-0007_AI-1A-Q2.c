#include<stdio.h>
void swap (int*,int*);
void sortThree(int*,int*,int*);
int main()
{
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("Before: %d %d %d\n",a,b,c);
	sortThree(&a,&b,&c);
    printf("After: %d %d %d",a,b,c);
}

void swap (int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

void sortThree(int *a,int *b, int *c)
{
	if (*a>*b) 
    swap(a,b);
	if (*b>*c) 
    swap (b,c);
	if (*a>*b) 
    swap (a,b);
}