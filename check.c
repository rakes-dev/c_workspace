#include<stdio.h>
#include<conio.h>

int primeNum(int);
int armstrongNum(int);
int perfectNum(int);

int primeNum(int num)
{
	int i,flag=0;

	if(num==0 || num==1)
	  flag=1;

	for(i=2;i<=num;++i){
		if(num%2==0){
			flag=1;
			break;
		}
	}
	if (flag == 0)
		return printf("\n%d is a prime number.", num);
	else
		return printf("\n%d is not a prime number.", num);
}
int armstrongNum(int num)
{
	int sum=0,rem;
	int check = num;
	while (check!=0)
	{
	  rem = check % 10;
	  sum = sum + (rem*rem*rem);
	  check = check / 10;
	}
	if(sum == num)
	  return printf("\n%d is an armstrong number.", num);
	else
	  return printf("\n%d is not an armstrong number.", num);
}
int perfectNum(int num)
{
	int check=0;
	for(int i=1;i<num;i++){
		if((num%i)==0){
			check = check + i;
		}
	}
	if(num==check)
	return printf("\n%d is a perfect number.", num);
	else
	return printf("\n%d is not a perfect number.", num);
}

int main()
{
	int num;

	printf("Enter a number to check prime number: ");
	scanf("%d", &num);

		primeNum(num);
		armstrongNum(num);
		perfectNum(num);

	getch();

}
