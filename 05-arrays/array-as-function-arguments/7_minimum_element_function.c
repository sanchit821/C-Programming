
// 7. Find the Smallest Element
// Topic: Array parameters, minimum tracking
// Difficulty: Moderate
// Time: 12 minutes
// File: 7_minimum_element_function.c
// Write a function named findMinimum() that returns
// the smallest element in the array.
//
// Example:
// Array: 45 12 78 6 31
//
// Output:
// Minimum = 6


#include<stdio.h>

void findminimum(int arr[], int n);

int main()
{
    int size;

    printf("Enter your size of array: ");
    scanf("%d", &size);

    int elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter your elements: ");
        scanf("%d", &elements[i]);
    }

    findminimum(elements, size);

    return 0;
}

void findminimum(int arr[], int n)
{
    int min_value = 0;

    min_value = arr[0];

    for(int i = 1; i < n; i++)
    {
        if( arr[i] < min_value )
        {
            min_value = arr[i];
        }
    }

    printf("Minimum = %d\n", min_value);
}