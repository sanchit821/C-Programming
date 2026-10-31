// 17. Voting Eligibility
// Topic: if-else, relational operators
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to accept a person's age
// and determine whether they are eligible to vote.
// Consider 18 years as the minimum voting age.
//
// Example:
// Input:
// Enter age: 19
//
// Expected Output:
// Eligible to vote.

#include<stdio.h>

int main()
{
    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age > 18)
    {
        printf("YOU CAN VOTE\n");
    }
    else{
        printf("YOU CANNOT VOTE\n");
    }

    return 0;
    
}