#include <stdio.h>
// finding g.c.d. and l.c.m. of two numbers
int main()
{
    int a,b,i,gcd,lcm;
    printf("Enter two numbers\n");
    scanf("%d\n%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    printf("g.c.d. is %d\n",gcd);
    lcm=(a*b)/gcd;
    printf("l.c.m. is %d",lcm);
}
S
