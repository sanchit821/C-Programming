// 11. Swap Numbers
// Topic: Variables, assignment operator, temporary variable
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to swap two numbers using a
// temporary variable.
//
// Example:
// Input:
// First number: 10
// Second number: 20
//
// Output:
// Before swapping: 10 20
// After swapping: 20 10

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nValues before swap:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    c = b;
    b = a;
    a = c;

    printf("\nValues after swap:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);

    return 0;
}