// 10. Sum of Two Numbers
// Topic: scanf(), printf(), arithmetic operators
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to accept two integers from the user
// and calculate their sum.
//
// Example:
// Input:
// Enter two numbers: 15 25
//
// Output:
// Sum = 40


#include<stdio.h>

int main()
{
    int a,b;
    int sum;

    printf("Enter number:");
    scanf("%d", &a);
    printf("Enter number:");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum = %d\n", sum);
    return 0;



}