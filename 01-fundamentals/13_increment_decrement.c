// 13. Increment/Decrement
// Topic: Increment (++), decrement (--), unary operators
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to demonstrate the use of increment
// and decrement operators on an integer variable.
//
// Example:
// Input:
// Initial value = 10
//
// Output:
// After increment = 11
// After decrement = 10

#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("Original value = %d\n", n);
    printf("After increnment value = %d\n", n+1);
    printf("After Decrenment value = %d\n", n-1);

    return 0;
}