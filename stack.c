#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct stk
{
  int data;
  struct stk *next;
}node;

node *push(node* top, int item)
{
  node *t;
  t=(node*)malloc(sizeof(node));
  t->next=top;
  t->data=item;
  top=t;
  return top;
}
node pop(node* top)
{
  if(pop==NULL)
  {
    printf("\nStack is empty");
    return;
  }
  printf("\nitem %d",t->data);
  t=top;
  top=top->next;
  free(t)
  return top;
}

void main()
{
  push(34,5);
  push(8,8);
  push(9,7);push(5,4);
  push(3,1);push(12,0);
  
}
