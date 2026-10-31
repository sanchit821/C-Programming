// A machine operates for n cycles. Display the cycle number and whether the cycle is even or odd.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);


    if( n <= 0)
    {
        printf("Error number should be positive\n");
       return 1;
    }


    for( int i = 1; i <= n; i++)
    {
        if( i % 2 == 0)
        {
            printf("Cycle no %d is Even\n", i);
        }
        else
        {
            printf("Cycle no %d is odd\n", i);
        }
    }

    return 0;

    
}




















#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of machine cycles: ");
    scanf("%d", &n);

    // INPUT VALIDATION: Ensure the machine runs for at least 1 cycle
    if (n <= 0)
    {
        printf("Error: Operational cycles must be a positive integer greater than 0.\n");
        return 1; // Returning 1 instead of 0 tells the system the program closed due to an error
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Cycle no %d is Even\n", i);
        }
        else
        {
            printf("Cycle no %d is Odd\n", i); // Capitalized 'Odd' to match 'Even'
        }
    }

    return 0;
}
