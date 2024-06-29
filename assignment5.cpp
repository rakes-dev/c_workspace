#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of the array
int main()
{
    int arr[MAX_SIZE];
    int i, num, sum=0;
    //Reads size and elements in array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    printf("Enter %d elements in the array: ", num);
    for(i=0; i<num; i++)    {
        scanf("%d", &arr[i]);
    }
    //Adding all elements
    for(i=0; i<num; i++)
    {
        sum = sum + arr[i]; // Calculating sum
    }
    printf("Sum of all elements of array = %d", sum);

    return 0;
}
