#include<stdio.h>

//function to add digit of numbers
int main()
{
	int n,sum=0;
	int remainder;
	
	printf("\nEnter a No. ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder = n%10;
		sum = sum + remainder;
		n = n/10;
	}
	printf("\nSum Value: %d",sum);
}
