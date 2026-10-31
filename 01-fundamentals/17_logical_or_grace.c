// 17. Logical OR and Grace
// Topic: Logical OR (||), if-else, logical expressions
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to demonstrate the logical OR operator
// in a student grace-marks condition. Accept marks in two
// subjects and check whether the student is eligible for
// grace marks if they fail in at least one subject.
//
// Example:
// Input:
// Subject 1 marks: 30
// Subject 2 marks: 60
//
// Output:
// Student is eligible for grace marks.

#include<stdio.h>
int main()
{
    float subject1, subject2;

    printf("Enter marks of subject 1:");
    scanf("%f", &subject1);
    printf("Enter marks of subject 1:");
    scanf("%f", &subject2);


    if (subject1 > 35 || subject2 > 35 )
    {
        printf("Pass\n");
    }else{
        printf("Fail\n");
    }

    return 0;

}