// 7. Absolute Value
// Topic: if-else, unary minus operator, relational operators
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept an integer and calculate
// its absolute value using conditional statements.
//
// Example:
// Input:
// Enter a number: -25
//
// Expected Output:
// Absolute value = 25
#include<stdio.h>

int main()
{
    int num, absolute_value;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if( num < 0)
    {
        absolute_value = num * -1;

        printf("Absolute Value of" " %d "  "is"  " %d\n", num, absolute_value);
    }
    else{
        printf("Absolute Value of" " %d " "is" " %d\n", num, num );
    }

    return 0;

}