// 12. Grade System
// Topic: else-if ladder, relational operators
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to accept a student's percentage
// and assign a grade based on the specified percentage
// ranges.
//
// Example:
// Input:
// Enter percentage: 85
//
// Expected Output:
// Grade: A


#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Validation for invalid score entries
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    } 
    // Checks 90 to 100
    else if (marks >= 90) 
    {
        printf("A grade\n");
    } 
    // Checks 70 to 89
    else if (marks >= 70) 
    {
        printf("B Grade\n");
    } 
    // Checks 50 to 69
    else if (marks >= 50) 
    {
        printf("C Grade\n");
    } 
    // Checks 35 to 49
    else if (marks >= 35) 
    {
        printf("D Grade\n");
    } 
    // Everything under 35
    else 
    {
        printf("Fail\n");
    }

    return 0;
}
