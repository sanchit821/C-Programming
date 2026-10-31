// 31. Sum Using Pointer
// Topic: Pointers, pointer declaration, dereferencing
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept two integers and
// calculate their sum using pointers.
// Access the values of the variables through pointers.
//
// Example:
// Input:
// Enter two numbers: 10 20
//
// Output:
// Sum = 30

#include<stdio.h>

int main()
{
    int a = 5, b = 10, sum = 0;
    int *pa = &a, *pb = &b, *ps = &sum;

    *ps = *pa + *pb;
    printf("Sum = %d\n", *ps);

    return 0;
  

    
}