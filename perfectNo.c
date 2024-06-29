#include <stdio.h>
#include <conio.h>

int main()
{
  int i,num,res=0;

  printf("Enter a number to check Perfect or Not: ");
  scanf("%d",&num);

  for(int i=1; i<num; i++)
  {
    if(num%i==0)
    {
      res+=i;
    }
  }
  if(res==num)
    printf("%d is a Perfect Number",num);
  else
    printf("%d is not a Perfect Number",num);

  return 0;
}
