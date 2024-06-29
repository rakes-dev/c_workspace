#include <stdio.h>
int main() {
    int num, num2, remainder, result = 0;
    printf("Enter any three-digit integer: ");
    scanf("%d", &num);
    num2 = num;

    while (num2 != 0)
	{
       remainder = num2 % 10;
       result += remainder * remainder * remainder;
       // removing last digit from the orignal number
       num2 /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
