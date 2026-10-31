// 3. Count Readings Above a Threshold
// Topic: Array traversal, conditions, counting
// Difficulty: Basic
// Time: 7 minutes

// Count how many sensor readings are greater than 20.
//
// Example:
// 12 28 35 18 42 16
//
// Output:
// Count = 3

#include<stdio.h>

int main()
{
    int readings[5] = {};
    int count = 0;

    for( int i = 0; i < 5; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }

    printf("\n------OUTPUT------\n");
    for(int i = 0; i < 5; i++)
    {
        if( readings[i] >= 20)
        {
            count++;
        }
    }
    
    printf("The Total count is %d\n", count);
    return 0;
}

