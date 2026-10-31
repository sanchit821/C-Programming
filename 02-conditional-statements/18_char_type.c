// 18. Character Type
// Topic: Nested if-else, ASCII values, character comparison
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to accept a character and determine
// whether it is an alphabet, digit, or special character.
//
// Example:
// Input:
// Enter a character: 7
//
// Expected Output:
// It is a digit.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Enter a string:");
    scanf("%s", &ch);

    if( isalpha(ch))
    {
        printf("%c is is a character\n", ch);
    }
    else if (isdigit(ch))
    {
        printf("%c is a number\n",ch);
    }
    else
    {
        printf("%c is a symbol\n", ch);    
    }
    
    return 0;
    
}