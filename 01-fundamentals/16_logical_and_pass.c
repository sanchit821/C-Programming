// 16. Logical AND and Pass
// Topic: Logical AND (&&), relational operators, if-else
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept marks in two subjects.
// A student passes only if they score at least 35 marks
// in both subjects. Use the logical AND operator
// to determine the result.
//
// Example:
// Input:
// Subject 1 marks: 60
// Subject 2 marks: 40
//
// Output:
// Student has passed.

#include<stdio.h>
int main()
{
    float subject1, subject2;

    printf("Enter marks of subject 1:");
    scanf("%f", &subject1);
    printf("Enter marks of subject 1:");
    scanf("%f", &subject2);


    if (subject1 > 35 && subject2 > 35 )
    {
        printf("Pass\n");
    }else{
        printf("Fail\n");
    }

    return 0;

}