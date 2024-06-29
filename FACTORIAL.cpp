#include<stdio.h>

int main()
{
	int num,i;
	int fact=1;
	
	printf("\nEnter any No. ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial of %d is %d",num,fact);
}
