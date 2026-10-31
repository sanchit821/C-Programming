// 14. Even or Odd
// Topic: if-else, modulus operator
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept an integer and determine
// whether it is even or odd.
//
// Example:
// Input:
// Enter a number: 15
//
// Output:
// 15 is an odd number.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (n % 2 == 0){
        printf("Even number %d\n", n);
    }else{
         printf("odd number %d\n", n);
    }
    return 0;
    

}