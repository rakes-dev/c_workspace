#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct link
{
int data;
struct link * next;
}node;

//declaration
node* insert_beg(node*,int);
void display(node*);
int add_item(node*);
int count_node(node*);

//main body
int main(void)
{
node * H=NULL;
int n, i;
//clrscr();
printf("\nhow many nodes: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
  H=insert_beg(H,n);
}
display(H);
printf("\n No of node is: %d",count_node(H));
printf("\n Sum of node items is: %d",add_item(H));
//getch();
return 0;
}

//body of function
int add_item(node* H)
{
int s=0;
while (H!=NULL)
{
s=s+H->data;
H=H->next;
}
return s;
}
node* insert_beg(node* H,int item)
{
  printf("\nenter item: ");
  scanf("%d", &item);
  node* t;
  t = (node*)malloc(sizeof(node));
  t->data=item;
  t->next=H;
  H=t;
  return(H);
}
int count_node(node* H)
{
  int c=0;
  while (H!=NULL)
  {
    c++;
    H=H->next;
  }
  return c;
}
void display(node* H)
{
  printf("Entered items: \n");
  while (H!=NULL)
  {
    printf("%d\n", H->data);
    H=H->next;
  }
  return;
}
