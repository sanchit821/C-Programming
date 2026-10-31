// 6. Case Check
// Topic: if-else, character comparison, ASCII values
// Difficulty: Basic
// Time: 7 minutes

// Problem Statement:
// Write a C program to accept an alphabet and determine
// whether it is an uppercase or lowercase character.
//
// Example:
// Input:
// Enter a character: G
//
// Expected Output:
// G is an uppercase character.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);

    if( isupper(ch))
    {
        printf("Character is uppercase\n");
    }
    else if (islower(ch))
    {
        printf("Character is lowercase\n");
    }

    return 0;
    

    
}