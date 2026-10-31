// 26. Factorial
// Topic: for loop, accumulator variable, multiplication
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to calculate the factorial of
// a given non-negative integer.
// Factorial is the product of all positive integers
// from 1 to that number.
//
// Example:
// Input:
// Enter a number: 5
//
// Output:
// Factorial = 120

#include <stdio.h>

int fact(int n);

int main()
{
    printf("Factorial is: %d\n", fact(5));
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int factNm1 = fact(n - 1);
    int factN = factNm1 * n;

    return factN;
}

