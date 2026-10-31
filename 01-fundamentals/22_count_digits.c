// 22. Count Digit
// Topic: while loop, modulus operator, integer division
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept an integer and count
// the total number of digits present in it.
//
// Example:
// Input:
// Enter a number: 12345
//
// Output:
// Total number of digits = 5


#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Special case for 0
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}