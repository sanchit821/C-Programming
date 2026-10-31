// 5. Readings at Even Indexes
// Topic: Array traversal, indexes, conditional filtering
// Difficulty: Basic
// Time: 10 minutes

// Display only the elements stored at even indexes.
// Remember: array indexes start at 0.
//
// Example:
// 14 27 33 46 52 61 78
//
// Output:
// 14 33 52 78


#include<stdio.h>

int main()
{
    int readings[5] = {};
    for(int i = 0; i < 5; i++)
    {
        printf("Enter your readings: ");
        scanf("%d", &readings[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        if( i % 2 == 0)
        {
            printf("%d", readings[i]);
        }
        printf("\n");
    }

    return 0;
}