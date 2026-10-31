// 9. Find the Highest Reading
// Topic: Array traversal, comparison, maximum value
// Difficulty: Moderate
// Time: 15 minutes

// Find and display the highest reading in the array.
// Do not sort the array and do not use a built-in function.
//
// Example:
// 34 78 21 95 63 42
//
// Output:
// Highest reading = 95


#include<stdio.h>

int main()
{
    int readings[6] = {};
    int i = 0;


    for(  i = 0; i < 6; i++)
    {
        printf("Enter your readings %d: ", i);
        scanf("%d", &readings[i]);
    }

     int max_value = readings[0];
     int min_value = readings[0];

    for( i = 0; i < 6; i++)
    {
        if( readings[i] > max_value)
        {
            max_value = readings[i];
        }
        if (readings[i] < min_value)
        {
            min_value = readings[i];
        }
        
    }

    printf("\nMaximum reading in the array is %d\n",max_value);
    printf("\nMaximum reading in the array is %d\n",min_value);

    

    return 0;


}


