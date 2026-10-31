// 5. Integer Variable
// Topic: Variable declaration, int data type, assignment
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to declare an integer variable,
// assign it a value, and display the stored value.
//
// Example:
// Output:
// Value of integer variable: 25


#include<stdio.h>

int main()
{
    int integer ;
    printf("Enter an integer value;");
    scanf("%d", &integer);
    printf("The value of integer variable is: %d\n", integer);

    return 0;

}