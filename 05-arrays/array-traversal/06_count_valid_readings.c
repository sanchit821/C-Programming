// 6. Count Valid Sensor Readings
// Topic: Array traversal, conditions, counting
// Difficulty: Basic–Moderate
// Time: 10 minutes

// A sensor reading is valid if it lies between 10 and 100,
// inclusive. Count the valid readings.
//
// Example:
// 5 10 45 120 100 8 75
//
// Output:
// Valid readings = 4


#include<stdio.h>

int main()
{
    int readings[10] = {};
    int count = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Enter your readings: ");
        scanf("%d", &readings[i]);

        if( readings[i] >= 10 && readings[i] <= 100)
        {
            count++;
        }
    }

    printf("The count of reaings btw 1 and 100 are: %d\n", count);
    return 0;


}
