// 6. Area of Circle
// Topic: float data type, constants, arithmetic expressions
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to calculate the area of a circle.
// Accept the radius from the user and use the formula:
//
// Area = 3.14 * radius * radius
//
// Example:
// Input:
// Enter radius: 5
//
// Output:
// Area of circle = 78.50

#include<stdio.h>

int main()
{
    int r;
    float pi, Area;
    pi = 3.14;

    printf("Enter radius:");
    scanf("%d", &r);
    Area = pi * r * r;
    printf("Area of circle is %f", Area);

    return 0;


}