// 1. Display Sensor Readings
// Topic: Array traversal, accessing elements
// Difficulty: Basic
// Time: 5 minutes

// Display every element of the given array, one per line.
//
// Example:
// 12 25 18 40 31
//
// Output:
// 12
// 25
// 18
// 40
// 31


#include<stdio.h>

int main()
{
    int elements[] = {1 , 2, 3, 4, 5};

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", elements[i]);
    }

    printf("\n");
    return 0;

}