// 24. Area of Circle
// Topic: Loop, repeated input, arithmetic expressions
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to repeatedly accept the radius of
// a circle and calculate its area using the formula:
//
// Area = 3.14 * radius * radius
//
// Example:
// Input:
// Enter radius: 2
//
// Output:
// Area = 12.56


#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);


int main()
{
    float side = 5;
    printf("area is : %f", squareArea(side)) ;
    return 0;

    float rad = 5;
    printf("area is : %f", circleArea(rad)) ;
    return 0;

    float a = 5;
    float b = 7;
    printf("area is : %f", rectangleArea(a,b)) ;
    return 0;

}

float squareArea (float side)
{
    return side * side;
}

float circleArea(float rad)
{
    return 3.14 * rad * rad;
}

float rectangleArea(float a, float b)
{
    return a * b;
}

