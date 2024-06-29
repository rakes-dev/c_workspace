#include <stdio.h>
#include <conio.h>

int main()
{
  int i,n,t=0;
  int arr[50],posArr[50];

  printf("Enter No of inetger you want to enter: \n");
  scanf("%d",&n);

  for(i=0; i<n; i++)
  {
    printf("\nEnter elements: ");
    scanf("%d",&arr[i]);
  }
  printf("\nPositive Integers are: ");
  for(i=0; i<n; i++)
  {
     if(arr[i]>=0)
     {
       posArr[t]=arr[i];
       printf("\n%d",posArr[t]);
     }
  }
  return 0;
}
