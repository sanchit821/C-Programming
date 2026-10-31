// 2. Display Readings with Their Positions
// Topic: Array traversal, indexes and values
// Difficulty: Basic
// Time: 5 minutes

// Display each reading alongside its array index.
//
// Example:
// 15 22 9 36
//
// Output:
// Index 0: 15
// Index 1: 22
// Index 2: 9
// Index 3: 36


#include<stdio.h>

int main()
{
    int readings[5] = {};

   
    for(int i = 0; i < 5; i++)
    {
        printf("Enter your array elements %d: ", i);
        scanf("%d", &readings[i]);   
    }

    printf("\n-------OUTPUT-------\n");
    for( int i = 0; i < 5; i++)
    {
        printf("Index %d: %d\n", i, readings[i]);
    }

    printf("\n");
    return 0;
}