// 16. Filter Invalid Sensor Readings
// Topic: Array traversal, conditions, filtering
// Difficulty: Moderate
// Time: 15 minutes

// A sensor produces readings between 0 and 1023.
// Treat readings outside this range as invalid.
// Display only the valid readings, preserving their order.
// Also count how many readings are invalid.
//
// Example:
// 120 1050 -5 700 1023 1100 250
//
// Output:
// Valid readings: 120 700 1023 250
// Invalid count = 3



#include<stdio.h>

int main()
{
    int readings[7] = {};
    int count = 0;

    for(int i = 0; i < 7; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }

    for(int i = 0; i < 7; i++)
    {
        if( readings[i] >= 0 && readings[i] <= 1023)
        {
            printf("%d\t", readings[i]);
        }
        else
        {
            count++;
        }
    }

    printf("\nInvalid count = %d\n", count);
    return 0;
}