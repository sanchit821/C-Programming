// 18. Largest of Three
// Topic: Nested if-else, relational operators, logical operators
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept three numbers and determine
// the largest among them.
//
// Example:
// Input:
// Enter three numbers: 10 25 15
//
// Output:
// Largest number = 25

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a number:");
    scanf("%d", &b);
    printf("Enter a number:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is greater\n", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is greater\n",b);
    }
    else{
        printf("%d is greater\n",c);
    }
    
    return 0;
    

}