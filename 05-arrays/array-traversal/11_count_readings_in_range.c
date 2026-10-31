// 11. Count Readings Within a Range
// Topic: Array traversal, conditions, counting
// Difficulty: Basic–Moderate
// Time: 10 minutes

// Count how many readings fall between 30 and 70,
// inclusive.
//
// Example:
// 12 35 70 85 42 29 65
//
// Output:
// Readings in range = 4


#include<stdio.h>

int main()
{
    int readings[7] = {};
    int count = 0;

    for(int i = 0; i < 7; i++)
    {
        printf("Enter your readings: ");
        scanf("%d", &readings[i]);

        if(readings[i] >= 30 && readings[i] <= 70)
        {
            count++;
        }
    }
    printf("\nThe total count of readings btw 30 and 70 is %d\n", count);
    


    return 0;

    
   
}