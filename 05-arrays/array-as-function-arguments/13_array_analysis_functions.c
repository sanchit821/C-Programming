// 14. Separate Analysis into Functions
// Topic: Multiple functions using the same array
// Difficulty: Hard
// Time: 20 minutes

// Write separate functions to calculate the sum, minimum,
// and maximum of the same array.
// Call all three functions from main().
//
// Example:
// Array: 18 5 42 27 11
//
// Output:
// Sum = 103
// Minimum = 5
// Maximum = 42

#include<stdio.h>

void All3(int arr[], int n);

int main()
{
    int size;

    printf("Enter your array size: ");
    scanf("%d", &size);

    int elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter your array elements: ");
        scanf("%d", &elements[i]);
    }

    All3(elements, size);
    
    return 0;
}

void All3(int arr[], int n)
{
    int sum = 0, min_value = 0, max_value = 0;

    min_value = arr[0];
    max_value = arr[0];


    for( int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    for( int i = 1; i < n; i++)
    {
        if( arr[i] > max_value)
        {
            max_value = arr[i];
        }
        if( arr[i] < min_value)
        {
            min_value = arr[i];
        }
    }

    printf("\nSum = %d\n", sum);
    printf("Minimum = %d\n", min_value);
    printf("Maximum = %d\n", max_value);
}