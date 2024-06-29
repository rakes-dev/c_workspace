#include<stdio.h>
int armstrongNo(int);

int armstrongNo(int n)
{
	int r,sum = 0;
	//Finding armstrong number or not
    for(int i = n; i>0; i=i/10)
	{
	r = i % 10;
    sum = sum + r * r * r;
    }	
    return sum;
}

int main()
{
    int num,n;
    //Reading a number from user
    printf("Please enter a number: ");
    scanf("%d",&n);
    num = armstrongNo(n);

    if ( num == n )
    printf("\n%d is an armstrong number.",n);
    else
    printf("\n%d is not an armstrong number.",n);

    return 0;
}

