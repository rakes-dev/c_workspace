#include <stdio.h>
void main ()
{
int number[5];
int i, j, a, n;

printf("Enter the numbers \n");
for (i = 0; i < 5; ++i)
scanf("%d", &number[i]);
/* sorting begins ... */
for (i = 0; i < 5; ++i)
{
for (j = i + 1; j < 5; ++j)
{
if (number[i] > number[j])
{
a = number[j];
number[j] = number[i];
number[i] = a;
}
}
}
printf("The numbers arranged in ascending order are given below\n");
for (i = 0; i < 5; ++i)
{
printf("%d\n", number[i]);
}
}
