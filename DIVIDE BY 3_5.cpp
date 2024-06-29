#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	
	printf("\nEnter any No.");
	scanf("%d",&num);
	 for(i=1;i<=num;i++)
	 {
	 	if(i%3==0 || i%5==0)
		 {
		 	printf("\n%d",i);
		 }
	 }	
}
