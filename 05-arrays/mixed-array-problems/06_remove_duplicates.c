// . Remove Repeated Sensor Values
// Topic: Nested traversal, duplicate detection
// Difficulty: Moderate
// Time: 25 minutes

// A sensor buffer contains repeated readings.

// Example:
// 10 12 10 15 12 18 15

// Create a program that produces:
// 10 12 15 18
// The first occurrence of every value should be preserved.

// Do not use a second full-size input array.


#include<stdio.h>

int main()
{
    int readings[] = { 10, 20, 10, 30, 20, 45, 65, 30, 45 };

    for( int i = 0; i <= 8; i++)
    {
        for( int j = 0; j <= i; j++)
        {
            if( readings[j] == readings[i])
            {
                continue;
            }
            else
            {
                printf("%d",readings[i]);
            }
        }
    }

    return 0;

}