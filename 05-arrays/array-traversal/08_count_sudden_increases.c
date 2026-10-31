// 8. Count Sudden Increases
// Topic: Array traversal, adjacent elements, comparison
// Difficulty: Moderate
// Time: 15 minutes

// Count how many times a reading is greater than the
// reading immediately before it.
//
// Example:
// 10 15 12 20 25 18
//
// Output:
// Sudden increases = 3


#include<stdio.h>

int main()
{
    int readings[6] = {};
    int count = 0;
    
    for(int i = 0; i < 6; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }


    for(int i = 1; i < 6; i++)
    {
       if(readings[i] > readings[i-1])
       {
        count++;
       }
    }

    printf("Sudden count: %d\n", count);
    return 0;
}