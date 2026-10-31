// 17. Find the Missing Sample
// Topic: Array traversal, arithmetic, problem-solving
// Difficulty: Moderate
// Time: 20 minutes

// An array contains distinct integers from 1 to 6,
// but one number is missing.
// Find the missing number without sorting the array.
//
// Example:
// 4 1 6 2 5
//
// Output:
// Missing number = 3

#include<stdio.h>

int main()
{
    int readings[5] = {};


    for(int i = 0; i < 5; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        if(readings[i] != i)
        {
            printf("%d\n", i);
        }
    }

    return 0;

}