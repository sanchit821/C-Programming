// 2. Personal Information
// Topic: printf(), formatted output
// Difficulty: Basic
// Time: 5 minutes

// Problem Statement:
// Write a C program to display your personal information,
// including your name, age, city, and college.
//
// Example:
// Output:
// Name: Sanchit
// Age: 19
// City: Pune
// College: MES Abasaheb Garware College

#include <stdio.h>
int main()
{
    
    char name[] = "sanchit sawant";
    int age = 19 ; 
    char college[] = "MES";
    char skills[] = "Cooking , Reading, Cycling " ;

    printf("My name is %s\n ",name );
    printf("my age is %d\n ",age);
    printf("My college name is %s\n ", college);
    printf("MY skills are %s\n ", skills);

    return 0;


}