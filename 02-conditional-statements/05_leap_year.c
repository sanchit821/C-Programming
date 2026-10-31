// 4. Leap Year
// Topic: if-else, logical AND (&&), logical OR (||),
//        modulus operator
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to accept a year and determine
// whether it is a leap year.
//
// A year is a leap year if it is divisible by 400,
// or if it is divisible by 4 but not divisible by 100.
//
// Example:
// Input:
// Enter year: 2024
//
// Expected Output:
// 2024 is a leap year.
#include<stdio.h>

int main()

{
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    if((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0))
    {
        printf("%d is leap not year\n",year);
    }
    else
    {
        printf("%d is leap year\n", year);
    }

    return 0;

}