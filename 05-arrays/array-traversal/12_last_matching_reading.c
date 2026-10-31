// 12. Find the Last Matching Reading
// Topic: Array traversal, conditions, search
// Difficulty: Moderate
// Time: 12 minutes

// Find the last reading greater than 50.
// Display its value and index.
// If no reading matches, display "No matching reading".
//
// Example:
// 20 65 30 80 45 92 10
//
// Output:
// Reading = 92
// Index = 5


#include<stdio.h>

int main()
{
    int readings[7] = {};
    int found = 0;
    int i;
    
    for( i = 0; i < 7; i++)
    {
        printf("Enter your readings: ");
        scanf("%d", &readings[i]);
    }

    for(i = 6; i >= 0; i--)
    {
        if( readings[i] > 50)
        {
            printf("\nReading = %d\nIndex = %d\n", readings[i], i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nNo matching reading\n");
    }

    return 0;


}