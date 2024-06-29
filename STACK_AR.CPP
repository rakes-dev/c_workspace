#include<stdio.h>
#include<conio.h>
#define max 10

typedef struct stk
{
 int top;
 int arr[max];
}stack;

void push(stack*,int);
int pop(stack*);
void display(stack*);

int main()
{
 stack s;
 s.top=-1;
 //clrscr();
 push(&s,1);
 push(&s,2);
 push(&s,3);
 printf("\nstack: \n");
 display(&s);
 printf("\nstack after pop: \n");
 pop(&s);
 display(&s);
 return 0;
 getch();
}

void push(stack *s, int n)
{
 if(s->top==max-1)
  {
    printf("\nOverflow");
    return;
  }
 else
  {
    s->top++;
    s->arr[s->top]=n;
  }
}

int pop(stack *s)
{
 if(s->top==-1)
 {
   printf("\n Underflow");
   return(-1);
 }
 else
  return(s->arr[s->top--]);
}

void display(stack *s)
{
 int i;
 for(i=s->top;i>=0;i--)
 printf("%d\n",s->arr[i]);
 return;
}
