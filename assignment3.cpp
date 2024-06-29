#include<stdio.h>
int primeNo(int);

int primeNo(int n)
{
	int f = 0;
    int i = 2;
    while(i <= n/2)
    {
        if(n%i == 0)
        {
        f=1;
        break;
        }
        i++;
    }
    if(f == 0)
    return printf("%d is a Prime Number", n);
    else 
    return printf("%d is Not a Prime Number", n); 
}
int main()
{
int f,num;
//Readind a number from user
printf("Enter any number: ");
scanf("%d", &num);

primeNo(num);

}

