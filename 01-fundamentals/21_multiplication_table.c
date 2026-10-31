// 21. Multiplication Table
// Topic: for loop, iteration, arithmetic operations
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept a number and display
// its multiplication table from 1 to 10.
//
// Example:
// Input:
// Enter a number: 5
//
// Output:
// 5 x 1 = 5
// 5 x 2 = 10
// 5 x 3 = 15
// ...
// 5 x 10 = 50

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Table of %d is\n", n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}