#include <stdio.h>
#define MAX_SIZE 100 //Maximum size of the array
int negativeElements(int[],int);

int negativeElements(int a[],int size)
{
    for(int i=0; i<size; i++)
    {
    //Printing negative elements
    if(a[i] < 0)
    return printf("\nAll negative elements in array are: \n%d\t", a[i]);
    }
    
}

int main()
{
    int arr[MAX_SIZE]; //Declares an array size
    int i, num;
    //Enter size of array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    //Reading elements of array
    printf("Enter elements in array: ");
    for(i=0; i<num; i++)
    {
    scanf("%d",&arr[i]);
    }
    negativeElements(arr,num);
    return 0;
}

