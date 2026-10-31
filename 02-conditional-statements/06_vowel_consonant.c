// 5. Vowels or Consonants
// Topic: if-else, logical OR (||), character comparison
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to accept an alphabet from the user
// and determine whether it is a vowel or a consonant.
//
// Example:
// Input:
// Enter a character: a
//
// Expected Output:
// a is a vowel.
#include<stdio.h>

int main()

{
    char lower_case, upper_case;
    char ch;
    printf("Enter charecter:");
    scanf("%c", &ch);

    lower_case = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    upper_case = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');


    if( lower_case || upper_case)
    {
        printf("its vowel\n");
    }
    else{
        printf( " its consonant\n");
    }

    return 0;


}



