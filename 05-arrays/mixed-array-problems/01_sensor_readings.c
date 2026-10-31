// Topic: Array declaration, input, traversal, average
// Difficulty: Basic
// Time: 15 minutes


// A temperature sensor records the temperature at 8 different moments.

// Write a C program that:
// Stores the 8 temperature readings in an array.
// Displays all the readings.
// Calculates and displays the average temperature.
// Counts how many readings are above the average.



#include<stdio.h>

int main()
{
    float readings[8] = {0};
    float avg = 0, total = 0;
    int above_avg_count = 0;

    for( int i = 0; i < 8; i++)
    {
        printf("Enter reading %d: ", i + 1);
        scanf("%f", &readings[i]);
        total += readings[i];
    }

    avg = total / 8;

    printf("\n--- Summary of Readings ---\n");
   
    for (int i = 0; i < 8; i++) 
    {
        printf("Reading %d is %.2f\n\n", i + 1, readings[i]);
    }
    printf("The average of readings is %.2f\n", avg);

    for (int i = 0; i < 8; i++)
    {
        if (readings[i] > avg)
        {
            above_avg_count++;
        }
    }
    printf("Number of readings above average: %d\n\n", above_avg_count);


    return 0;



}
