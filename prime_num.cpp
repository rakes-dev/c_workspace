#include<stdio.h>

//function to check prime numbers
int main()
{
	int prime;
	
	printf("\nEnter any No. ");
	scanf("%d",&prime);
	
	if(prime%2!=0)
	printf("\nPrime Number");
	else
	printf("\nNot Prime Number");
}
