// 15. Compare Numbers
// Topic: if-else, relational operators
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept two numbers and compare
// them to determine whether the first number is greater,
// the second number is greater, or both are equal.
//
// Example:
// Input:
// Enter two numbers: 25 15
//
// Output:
// First number is greater.

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);

    if (a > b) 
    {
        printf("%d is greater then %d\n",a,b);
    
    }
    else{
        printf("%d is grater then %d\n",b,a);
    }

    return 0;

}