#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct pol
{
  int coeff;
  int power;
  struct pol *next;
}poly;

poly *create_poly(poly *p)
{
  poly *t; char ch;

  do
  {
    t=(poly*)malloc(sizeof(poly));
    printf("Enter co-efficient\n");
    scanf("%d",&t->coeff);
    printf("Enter power\n");
    scanf("%d",&t->power);
      t->next = p;
      p=t;
    printf("Continue y or Y\n");
    ch=getch();
  }
  while (ch=='y'||ch=='Y');
  return p;
}
