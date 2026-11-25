#include<stdio.h>
void addSeconds(int ,int*, int*, int*);
void convertTime(int, int*, int*, int*);
int main()
{
	int totsec,h,m,s,extra;
	printf("Enter total seconds: ");
	scanf("%d",&totsec);
	convertTime(totsec , &h, &m, &s);
	printf("Time: %02d:%02d:%02d\n",h,m,s);
    printf("Enter seconds to add: ");
    scanf("%d",&extra);
    extra+=totsec;
    addSeconds(extra,&h,&m,&s);
    printf("New time: %02d:%02d:%02d",h,m,s);
}
void convertTime(int totsec, int *h, int *m, int *s)
{
	*h=totsec/3600;
	*m= (totsec%3600)/60;
	*s= totsec%60;
}

void addSeconds(int extra,int *h, int *m, int *s)
{
    convertTime(extra,h, m, s);
}