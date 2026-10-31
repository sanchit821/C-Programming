// 15. Detect a Repeated Reading
// Topic: Array traversal, nested loops, duplicate detection
// Difficulty: Moderate
// Time: 20 minutes

// Determine whether any value appears more than once.
// Display "Duplicate found" if a duplicate exists;
// otherwise, display "No duplicates".
//
// Example:
// 10 25 30 25 45
//
// Output:
// Duplicate found
//
// Example:
// 10 20 30 40 50
//
// Output:
// No duplicates




#include<stdio.h>

int main()
{
    int readings[6] = {};
    int count = 1;
    
    for(int i = 0; i < 6; i++)
    {
        printf("Enter your reading: ");
        scanf("%d", &readings[i]);
    }



    for(int i = 0; i < 6; i++)
    {
       for( int j = 0; j < i; j++)
       {
        if(readings[j] == readings[i])
        {
            count++;
        }
       }
    }

    if( count != 1)
    {
        printf("Duplicate Found\n\n");
    }
    else
    {
        printf("Duplicate Not Found\n");
    }
    printf("%d\n", count);
    return 0;
    
}