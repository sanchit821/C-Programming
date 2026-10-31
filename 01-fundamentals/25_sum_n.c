// 25. Sum of N Numbers
// Topic: for loop, accumulator variable, arithmetic operations
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept a positive integer N
// and calculate the sum of all natural numbers
// from 1 to N.
//
// Example:
// Input:
// Enter N: 5
//
// Output:
// Sum = 15


#include <stdio.h>

int sum(int n);

int main()
{
    printf("Sum is: %d\n", sum(5));
    return 0;
}

// Recursive function
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1);   // Sum from 1 to (n - 1)
    int sumN = sumNm1 + n;

    return sumN;
}