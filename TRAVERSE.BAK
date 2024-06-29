#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct stack
{
  int data;
  struct stack *next;
}NODE;

NODE* insert_beg(NODE* H,int n)
{
  NODE* t;
  t = (NODE*)malloc(sizeof(NODE));
  t->data=n;
  t->next=H;
  H = t;
  return(H);
}
NODE *delete_beg(NODE *H)
{
  NODE *t;
  t=H;
  H=H->next;
  free(t);
  return H;
}
void traverse(NODE* H)
{
  while(H!=NULL)
  {
    printf("%d -> \n",H->data );
    H = H->next;
  }
  return;
}
NODE *copy(NODE* H)
{
    NODE *p;
    if(H==NULL)
    return NULL;
    else
    {
      p= (NODE*)malloc(sizeof(NODE));
      p->data=H->data;
      p->next=copy(H->next);
    }
    return (p);
}

void main()
{
  NODE* H=NULL;
  NODE* Dup;
  H=insert_beg(H,23);
  H=insert_beg(H,26);
  H=insert_beg(H,36);
  H=insert_beg(H,48);
  H=insert_beg(H,52);

  printf("\nOriginal\n");
  traverse(H);

  printf("Duplicate\n");
  Dup=copy(H);
  traverse(Dup);

  printf("\nAfter deletion\n");
  H=delete_beg(H);
  traverse(H);
  getch();
}
