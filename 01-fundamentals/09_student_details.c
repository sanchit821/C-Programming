// 9. Student Details
// Topic: Variables, multiple data types, input/output
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept and display a student's
// details, including name, roll number, and percentage.
//
// Example:
// Input:
// Name: Rahul
// Roll Number: 101
// Percentage: 85.5
//
// Output:
// Student Details
// Name: Rahul
// Roll Number: 101
// Percentage: 85.50


#include <stdio.h>

int main()
{
    int age;
    float percentage;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    printf("Your name is %s\n", name);
    printf("Your age is %d\n", age);
    printf("Your percentage is %.2f\n", percentage);

    return 0;
}