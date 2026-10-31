// 10. Count Occurrences of a Target
// Topic: Array traversal inside functions, frequency counting
// Difficulty: Moderate
// Time: 15 minutes

// Write a function that counts how many times a target
// value appears in the array.
//
// Example:
// Array: 4 7 4 2 4 9 7
// Target: 4
//
// Output:
// Occurrences = 3



#include<stdio.h>

void countElement( int arr[], int n, int target);

int main()
{
    int size, target;;
    
    printf("Enter your array size: ");
    scanf("%d", &size);

    int elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter your elements: ");
        scanf("%d", &elements[i]);
    }

    printf("\n\nEnter target value: ");
    scanf("%d", &target);

    countElement(elements,size,target);
    return 0;
}

void countElement( int arr[], int n, int target)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }

    printf("\n\nOccurrences = %d\n", count);
}