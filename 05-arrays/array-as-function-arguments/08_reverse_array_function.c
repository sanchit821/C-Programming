// 8. Reverse an Array Using a Function
// Topic: Array parameters, indexes, swapping
// Difficulty: Moderate
// Time: 15 minutes

// Write a function that reverses the array in place.
// Do not create a second array.
//
// Example:
// Before: 10 20 30 40 50
//
// Output:
// After: 50 40 30 20 10


#include<stdio.h>

void reverseArray(int arr[], int n);

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter your array element: ");
        scanf("%d", &elements[i]);
    }

    reverseArray(elements, size);
    return 0;
}

void reverseArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}


//main concept is n -1 and i>=0


