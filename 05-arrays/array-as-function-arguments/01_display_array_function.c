// 1. Display an Array Using a Function
// Topic: Function declaration, array parameter, function call
// Difficulty: Basic
// Time: 8 minutes

// Write a function named displayArray() that receives an
// integer array and its size, then displays all elements.
//
// Example:
// Array: 10 20 30 40 50
//
// Output:
// 10 20 30 40 50



#include<stdio.h>
void displayarray(int arr[], int n);

int main()
{
    int arr[] = {};

    for(int i = 0; i < 6; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &arr[i]);
    }

    displayarray(arr,6);
    return 0;
}

void displayarray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
