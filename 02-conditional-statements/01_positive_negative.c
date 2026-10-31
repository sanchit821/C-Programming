// 1. Positive or Negative
// Topic: if-else, relational operators
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to accept an integer from the user
// and determine whether it is positive, negative, or zero.
//
// Example:
// Input:
// Enter a number: -15
//
// Expected Output:
// The number is negative.// Check if a number is positive or negative

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if ( num > 0 )
    {
        printf("number is positive\n" );
    }
    else if ( num < 0)
    {
        printf("Number is negative\n");
    }
    else
    {
        printf("Number is Zero\n");
    }

    return 0;
    
}
