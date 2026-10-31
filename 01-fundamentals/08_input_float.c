// 8. Input Float
// Topic: float data type, scanf(), printf()
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to accept a floating-point number
// from the user and display the entered value.
//
// Example:
// Input:
// Enter a decimal number: 12.5
//
// Output:
// Entered number = 12.50


#include<stdio.h>

int main()
{
    float value;
    printf("Enter a float number:");
    scanf("%f", &value);
    printf("Float value = %f",value);

    return 0;

}