// 3. Greatest of Three
// Topic: Nested if-else, relational operators
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept three numbers and find
// the greatest among them using conditional statements.
//
// Example:
// Input:
// Enter three numbers: 12 35 20
//
// Expected Output:
// Greatest number = 35

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter num1:");
    scanf("%d", &num1);

    printf("Enter num2:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d" " is greater\n", num1);
    }
    else
    {
        printf("%d" " is greater\n", num2);

    }

    return 0;
}