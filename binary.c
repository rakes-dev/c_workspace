#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct link
{
  int data;
  struct  link* next;
}node;


//prototype of function
node* insertb_beg (node*,int);
void display(node*);
int count_node(node*);
void insert_end(node*,int);
node* del_beg(node*);


//body of the function
node* insertb_beg(node* h, int n)
{
  node* t;
  t = (node*)malloc(sizeof(node));
  t->data=n;
  t->next=h;
  h=t;
  return(h);
}

void display(node* h)
{
  while (h!=NULL)
  {
    printf("%d\n",h->data );
    h=h->next;
  }
  return;
}

int count(node* h)
{
  int c=0;
  while (h!=NULL)
  {
    c++;
    h=h->next;
  }
  return c;
}
void odd(node* h)
{
  printf("\nodd numbers are: ");
  while (h!=NULL)
  {
    if(h->data % 2!=0)
    printf("%d\n",h->data);
    h=h->next;
  }
  return;
}
void insert_end(node* h,int n)
{
  node* t;
  t=(node*)malloc(sizeof(node));
  t->data=n;
  t->next=NULL;
  while (h->next!=NULL)
    h=h->next;
  h->next=t;
  return;
}
node* del_beg(node* h)
{
  node* t;
  t=h;
  h=h->next;
  free(t);
  return(h);
}
//main function
void main() {
  node* h=NULL;
  h=insertb_beg(h,1);
  h=insertb_beg(h,2);
  h=insertb_beg(h,3);
  display(h);
  printf("Node count %d\n",count(h));
  insert_end(h,200);
  display(h);
  h=del_beg(h);
  display(h);
  getch();
}
