// 12. Arithmetic Operation
// Topic: Arithmetic operators (+, -, *, /, %)
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to accept two integers and perform
// addition, subtraction, multiplication, division,
// and modulus operations.
//
// Example:
// Input:
// Enter two numbers: 20 6
//
// Output:
// Addition = 26
// Subtraction = 14
// Multiplication = 120
// Division = 3
// Modulus = 2

#include<stdio.h>

int main()
{
    int a,b, sum, sub, product, q, r;
    printf("Enter two numbers:");
    scanf("%d", &a);
    printf("Enter two numbers:");
    scanf("%d", &b);

    sum = a+b;
    sub =a-b;
    product = a*b;
    q = a/b;
    r = a%b;

    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",sub);
    printf("Product = %d\n",product);
    printf("Quotient = %d\n",q);
    printf("Remainder = %d\n",r);

    return 0;

}