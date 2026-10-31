// 33. Count Vowels Using Pointer
// Topic: Pointers, character arrays, string traversal
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to accept a string and count
// the total number of vowels using a pointer
// to traverse the character array.
//
// Example:
// Input:
// Enter a string: Hello World
//
// Output:
// Total number of vowels = 3


#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int count = 0;

    printf("Enter a word: ");
    scanf("%99s", str);

    p = str;
    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
        {
            count++;
        }
        p++;
    }

    printf("Number of vowels = %d\n", count);

    return 0;
}