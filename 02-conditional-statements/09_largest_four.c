// 9. Largest Among Four
// Topic: Nested if-else, relational operators, logical operators
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to accept four numbers and determine
// the largest among them using conditional statements.
//
// Example:
// Input:
// Enter four numbers: 10 45 25 30
//
// Expected Output:
// Largest number = 45
#include<stdio.h>

int main()
{
    int num1, num2, num3, num4, max;
    printf("Enter num1:");
    scanf("%d", &num1);

    printf("Enter num2:");
    scanf("%d", &num2);

    printf("Enter num3:");
    scanf("%d", &num3);

    printf("Enter num4:");
    scanf("%d", &num4);

    max = num1;

    if(num2 >= max)
    {
        max = num2;
    }
    if (num3 >= max)
    {
        max = num3;
    }
    if (num4 >= max)
    {
        max = num4;
    }
    printf("%d is greater\n", max);
    
    return 0;



    
}