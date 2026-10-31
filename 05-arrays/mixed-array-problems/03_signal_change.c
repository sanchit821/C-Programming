// Topic: Array traversal, neighboring elements, conditions
// Difficulty: Basic
// Time: 20 minutes

// An ADC gives 10 consecutive readings:
// 12 15 15 18 14 14 20 21 19 19

// Store the readings in an array.

// Count how many times the signal changes from one reading to the next.

// For example:
// 12 → 15   change
// 15 → 15   no change
// 15 → 18   change
// Display the total number of changes.


#include<stdio.h>

int main()
{
    int readings[10] = {0};
    int chnage_count = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Enter reading %d: ", i + 1);
        scanf("%d", &readings[i]);
    }


    for (int i = 0; i < 9; i++)
    {
        if (readings[i] != readings[i + 1])
        {
            chnage_count++;
        }
    }
    printf("\nNumber of change count is: %d\n\n", chnage_count);
}

