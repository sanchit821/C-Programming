// Topic: Traversal, min/max
// Difficulty: Basic — University-style
// Time: 15 minutes

// Take 10 integer values representing sensor readings.

// Find and display:

// The smallest value
// The largest value
// The position/index of the smallest value
// The position/index of the largest value
// Do not sort the array.

#include<stdio.h>

int main()
{
    int readings[ 10 ] = {0};
    

    for( int i = 0; i < 10; i++)
    {
        printf("Enter reading %d: ", i + 1);
        scanf("%d", &readings[i]);
    }

    int max_reading = readings[0];
    int min_reading = readings[0];



    for ( int i = 0; i < 9; i++)
    {
        if( readings[i] > max_reading)
        {
            max_reading = readings[i];
        }

        if (readings[i] < min_reading)
        {
            min_reading = readings[i];
        }
    } 
    
    
    printf("\nMaximum Reading: %d\n", max_reading);
    printf("Minimum Reading: %d\n", min_reading);

    return 0;


}