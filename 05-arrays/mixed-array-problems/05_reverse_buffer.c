// Topic: Indexing, swapping, array manipulation
// Difficulty: Basic
// Time: 20 minutes

// An embedded system stores 8 data values in a buffer.

// Reverse the array in the same array.

// For example:
// Before:
// 10 20 30 40 50
// After:
// 50 40 30 20 10
// Do not create a second array for the reversed data.



#include<stdio.h>

int main()
{
    int embedded[8] = {0};


    for( int i = 0; i < 8; i++)
    {
        printf("Enter data %d: ", i + 1);
        scanf("%d", &embedded[i]);
    }

    for( int i = 7; i > 0; i--)
    {
        printf("The embedded data is %d\n", embedded[i]);
    }

    return 0;
   
}















#include <stdio.h>

int main()
{
    int embedded[8] = {0};

    // 1. Gather 8 items from user
    for(int i = 0; i < 8; i++)
    {
        printf("Enter data %d: ", i + 1);
        scanf("%d", &embedded[i]);
    }

    // 2. TRUE REVERSAL: Swap values inside memory up to the middle element
    for(int i = 0; i < 4; i++)
    {
        int temp = embedded[i];
        embedded[i] = embedded[7 - i];
        embedded[7 - i] = temp;
    }

    // 3. Normal verification loop to prove memory order has changed
    printf("\n--- Array contents after true reversal ---\n");
    for(int i = 0; i < 8; i++)
    {
        printf("The embedded data at index %d is %d\n", i, embedded[i]);
    }

    return 0;
}
