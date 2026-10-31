// 29. Fibonacci Series
// Topic: for loop, variable updating, number sequences
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to accept the number of terms
// and display the Fibonacci series.
// Each term after the first two is the sum of
// the previous two terms.
//
// Example:
// Input:
// Enter number of terms: 7
//
// Output:
// 0 1 1 2 3 5 8

#include<stdio.h>

int fib(int n);

int main()
{
    // fib(6) ;
    printf("%d", fib(6));
    return 0;
}

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)  
    {
        return 1;
    }  
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    // printf(" fib of %d is : %d\n", n, fibN);
    return fibN;
}