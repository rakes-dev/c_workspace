#include<stdio.h>

//To print fibonacci series
int main()
{
	int i,n1=0,n2=1,n3,num;
	
	printf("\nEnter a No. ");
	scanf("%d",&num);
	printf("\nFibonacci Series:");
	printf("\n%d\n%d",n1,n2);
	
	for(i=2;i<=num;i++)
	{
	    n3 = n1+n2;
	    printf("\n%d",n3);
	    n1=n2;
	    n2=n3;
	    
	}
}
