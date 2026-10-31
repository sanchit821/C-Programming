// 5. Search for an Element
// Topic: Arrays in functions, searching, return values
// Difficulty: Basic
// Time: 12 minutes

// Write a function named searchArray() that returns the
// index of a target value, or -1 if it is not present.
//
// Example:
// Array: 8 16 24 32 40
// Target: 24
//
// Output:
// Index = 2


#include<stdio.h>

void searcharray(int arr[], int target);

int main()
{
    int elements[5] = {};

    for(int i = 0; i < 5; i++)
    {
        printf("Enter your element: ");
        scanf("%d", &elements[i]);
    }
    searcharray(elements,16);

    return 0;
}

void searcharray(int arr[], int target)
{
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            printf("Index = %d\n", i);
        }
    }
}