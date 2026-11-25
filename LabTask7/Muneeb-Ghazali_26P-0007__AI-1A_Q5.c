#include<stdio.h>
int isPrime(int);
int isPerfect(int);
int reverseNumber(int);
int isPalindrome(int);
int digitSum(int);
void report(int);

//Category 3 = No arguments, returns a value
int main()
{
	int n;
	printf("Enter a positive number: ");
	scanf("%d",&n);
	report(n);
}

//Category 4 = Arguments, returns a value
int isPrime(int n)
{
	for (int i=2;i<=n/2;i++)
	{
		if (n%i==0)
		return 0;
	}
	return 1;
}         

//Category 4 = Arguments, returns a value
int isPerfect(int n)
{
	int sum=0;
	for (int i=1;i<n;i++)
	{
		if (n%i==0)
		sum+=i;
	}
	if (sum==n)
	return 1;
	return 0;
}

//Category 4 = Arguments, returns a value
int reverseNumber(int n)
{
	int rev=0,digit=0;
	while (n>0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}	
	return rev;
}

//Category 4 = Arguments, returns a value
int isPalindrome(int n)
{
	if (reverseNumber(n)==n)
	return 1;
	return 0;
}

//Category 4 = Arguments, returns a value
int digitSum(int n)
{
	int sum=0,digit=0;
	while (n>0)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;
	}
	return sum;
}

//Category 2 = Arguments, no return value
void report (int n)
{
	isPrime(n)? 	printf("Prime: Yes\n"):printf("Prime: No\n");
	isPerfect(n)? 	printf("Perfect: Yes\n"):printf("Perfect: No\n");
	printf("Reverse: %d\n",reverseNumber(n));
	isPalindrome(n)?	printf("Palindrome: Yes\n"):printf("Palindrome: No\n");
	printf("Sum of digits: %d\n",digitSum(n));
	
	int original=n;
	printf("Primes from 1 to %d: ",n);
	for (int n=2;n<=original;n++)
	{
		if(isPrime(n)==0)
		continue;
		printf("%d ",n);
	}
}