#include <stdio.h>
int product(int);
int product(int i)
{
	int n=1;
	while(i != 0)
	{
	n = n * (i % 10);
	// Remove the last digit from n
	i = i / 10;
	}
	return n;
}
int main()
{
    int i;
    printf("Enter any number: " );
    scanf("%d",&i);
    printf("Product of digits = %d",product(i) );
}
