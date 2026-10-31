// 13. Count Consecutive Decreases
// Topic: Array traversal, adjacent comparisons
// Difficulty: Moderate
// Time: 15 minutes

// Count how many times a reading is smaller than the
// reading immediately before it.
//
// Example:
// 50 40 45 30 20 25
//
// Output:
// Decreases = 3


#include<stdio.h>

int main()
{
    int readings[7] = {};
    int count = 0;

    for(int i = 0; i < 7; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }

    for( int i = 1; i < 7; i++)
    {
        if(readings[i] < readings[ i-1 ])
        {
            count++;
        }
    }

    printf("\nThe total count of reading smaller than the reading\nimmediately before it is %d\n\n", count);
    return 0;
}