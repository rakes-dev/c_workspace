#include<stdio.h>
int main()
{
	int a,b,c,d;
	
	printf("\nEnter any 4 No.");
	scanf("%d""%d""%d""%d",&a,&b,&c,&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is maximum ");
			}
			else
			{
				printf("d is maximum ");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}

		else
		{
			if(c>d)
			{
				printf("c is maximum ");
			}
			else
			{
				printf("d is maximum ");
			}
		}
	}
	
}
