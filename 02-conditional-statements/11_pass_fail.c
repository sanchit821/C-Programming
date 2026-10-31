// 11. Pass or Fail
// Topic: if-else, relational operators
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept a student's marks
// and determine whether the student has passed or failed.
// Consider 35 marks as the minimum passing marks.
//
// Example:
// Input:
// Enter marks: 42
//
// Expected Output:
// Student has passed.


#include<stdio.h>

int main()
{
    int marks;
    printf("Enter marks of student:");
    scanf("%d", &marks);

    if(marks >= 35)
    {
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }

    return 0;

}