// 23. Armstrong Number
// Topic: while loop, modulus, integer division, exponentiation
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to check whether a given number
// is an Armstrong number.
// For a three-digit number, calculate the sum of the
// cubes of its digits and compare it with the original number.
//
// Example:
// Input:
// Enter a number: 153
//
// Output:
// 153 is an Armstrong number.

#include <stdio.h>

int main()
{
    int num, originalNum, remainder;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (result == originalNum)
    {
        printf("%d is an Armstrong number.\n", originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}