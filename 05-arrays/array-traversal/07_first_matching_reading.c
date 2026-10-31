// 7. Find the First Matching Reading
// Topic: Array traversal, conditions, search
// Difficulty: Moderate
// Time: 12 minutes

// Find the first reading greater than 50.
// Display its value and index.
// If no reading matches, display "No matching reading".
//
// Example:
// 12 35 48 67 82 20
//
// Output:
// Reading = 67
// Index = 3


#include<stdio.h>

int main()
{
    int readings[5] = {};
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Enter your reading %d: ", i);
        scanf("%d", &readings[i]);
    }


    for(i = 0; i <  5; i++)
    {
        if(readings[i] > 50)
        {
            printf("\n\nGreater than 50 number is %d and it's index is %d\n\n", readings[i], i);
            break;
        }
    }

    if(i == 5)
    {
        printf("\nNo matching reading\n");
    }


    return 0;

}