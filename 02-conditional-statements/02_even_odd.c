// 2. Even or Greater Than 2 Number
// Topic: if-else, logical operators, modulus operator
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to accept a number and check whether
// it satisfies the given conditions: whether it is even
// or greater than 2.
//
// Example:
// Input:
// Enter a number: 4
//
// Expected Output:
// The number is even and greater than 2.



#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if( num % 2 == 0)
    {
        printf("%d" " is even\n", num);
    }
    else{
        printf("%d" " is odd\n", num);
    }    

    return 0;
}
