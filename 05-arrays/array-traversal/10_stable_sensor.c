// 10. Detect a Stable Sensor
// Topic: Array traversal, consecutive values, pattern detection
// Difficulty: Moderate
// Time: 20 minutes

// A sensor is stable if the same reading occurs at least
// 3 consecutive times.
//
// Example:
// 10 10 10 12 14 14 15
//
// Output:
// Sensor was stable.
//
// But:
// 10 10 12 12 13 14
//
// Output:
// Sensor was not stable.


#include<stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int readings[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }

    for(int i = 1; i < n; i++)
    {
        if( readings[i] == readings[i-1])
        {
            count++;
        }
        if( readings[i] != readings[i-1])
        {
            count = 1;
        }
    }

    if(count >= 3)
    {
        printf("\nYes, your readings are stable\n");

    }
    else
    {
        printf("\nNO, your readings are not stable\n");

    }

    printf("\nThe total count of stable readings is %d\n", count);
    return 0;
}