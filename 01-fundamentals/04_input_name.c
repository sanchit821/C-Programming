// 4. Input Name
// Topic: scanf(), character arrays, input/output
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to accept a user's name from the keyboard
// and display a personalised greeting.
//
// Example:
// Input:
// Enter your name: Sanchit
//
// Output:
// Hello, Sanchit!

#include<stdio.h>

int main()
{
    char name[50];

    printf("Enter you name:");
    scanf("%s", name);

    printf("Welcome to C programming %s", name);

    return 0;


}

// if space come in btw name then is take only first words not the full name 