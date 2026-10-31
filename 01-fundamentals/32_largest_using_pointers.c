// 32. Largest Using Pointer
// Topic: Pointers, dereferencing, relational operators
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept two or more integers
// and determine the largest number using pointers.
//
// Example:
// Input:
// Enter three numbers: 10 45 25
//
// Output:
// Largest number = 45

#include<stdio.h>

int main()
{
    int a = 5, b = 10;
    int *pa = &a, *pb = &b;

    if (*pa > *pb)
    {
        printf("Largest = %d\n", *pa);
    }
    else{
        printf("Largest = %d\n", *pb);
    }

    return 0;
}