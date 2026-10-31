// 3. Find the Largest Element
// Topic: Arrays in functions, comparisons
// Difficulty: Basic
// Time: 10 minutes

// Write a function named findMaximum() that returns
// the largest element in the array.
//
// Example:
// Array: 12 45 23 67 31
//
// Output:
// Maximum = 67


#include<stdio.h>

void findmaximum(int max[], int n);

int main()
{
    int elements[5] = {};
    for(int i = 0; i < 5; i++)
    {
        printf("Enter your element: ");
        scanf("%d", &elements[i]);
    }

    findmaximum(elements, 5);
    return 0;
}


void findmaximum(int max[], int n)
{
    int Max = 0;
    Max = max[0];
    for(int i = 1; i < 5; i++)
    {
        if(max[i] > Max)
        {
            Max = max[i];
        }
    }

    printf("\nMaximum = %d\n", Max);
}