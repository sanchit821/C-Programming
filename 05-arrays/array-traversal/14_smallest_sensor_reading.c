// 14. Find the Smallest Reading
// Topic: Array traversal, comparison, minimum value
// Difficulty: Moderate
// Time: 15 minutes

// Find the smallest reading without sorting the array
// or using a built-in function.
//
// Example:
// 34 78 21 95 63 12
//
// Output:
// Smallest reading = 12


#include<stdio.h>

int main()
{
    int reading[6] = {};
    int min_value = 0;
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &reading[i]);
    }

    min_value = reading[0];

    for(i = 1; i < 5; i++)
    {
        if( reading[i] < min_value)
        {
            min_value = reading[i];
        }
    }

    printf("Smallest = %d\n", min_value);
    return 0;
}