#include<stdio.h>

//function to prin reverse number
int main()
{
	int remainder,n;
	int rev=0;
	
	printf("\nEnter a No.");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder = n%10;
		rev = rev*10+remainder;
		n=n/10;
	}
	printf("\nReversed Number: %d",rev);
}

