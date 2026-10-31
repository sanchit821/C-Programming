// 7. Addition
// Topic: Variables, arithmetic operators, addition
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to declare two integer variables,
// assign values to them, and display their sum.
//
// Example:
// Output:
// First number: 10
// Second number: 20
// Sum = 30


#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}