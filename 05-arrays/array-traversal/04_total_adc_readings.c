// 4. Calculate the Total ADC Readings
// Topic: Array traversal, accumulation, arithmetic
// Difficulty: Basic
// Time: 7 minutes

// Calculate and display the sum of all ADC readings.
//
// Example:
// 100 250 150 300 200
//
// Output:
// Total = 1000

#include<stdio.h>


int main()
{
    int readings[5] = {};
    int sum = 0;

    for( int i = 0; i < 5; i++) 
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        sum += readings[i];
    }

    printf("Total sum is: %d\n", sum);
    return 0;
}