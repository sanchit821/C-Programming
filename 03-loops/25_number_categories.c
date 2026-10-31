// Read 10 numbers and determine how many are positive, negative, and zero.

#include<stdio.h>

int main()
{
    int num, count_p = 0, count_n = 0, count_z = 0;


    for( int i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if( num > 0)
        {
            count_p += 1;
        }
        else if (num < 0)
        {
            count_n += 1;
        }
        else if (num == 0)
        {
            count_z += 1;
        }
        else{
            printf("Invaild input\n");
        }
    }

    printf("\n\nThe total count of Postive number are: %d \n", count_p);
    printf("\nThe total count of Negative number are: %d \n", count_n);
    printf("\nThe total count of Zero are: %d \n", count_z);

    return 0;
}



















#include <stdio.h>

int main()
{
    int num, count_p = 0, count_n = 0, count_z = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        
        // CRASH PROTECTION: scanf returns 1 if it successfully reads a number
        if (scanf("%d", &num) != 1) 
        {
            printf("Invalid input! Letters are not allowed. Please try again.\n");
            
            // Clean out the invalid letter from the input buffer so it doesn't loop infinitely
            while (getchar() != '\n'); 
            
            i--; // Decrement the loop counter so the user doesn't lose their turn
            continue; // Skip the rest of this loop cycle and try reading again
        }

        // OPTIMIZED LOGIC: Cleaner, faster branch execution
        if (num > 0)
        {
            count_p++; // Cleaner C syntax for adding 1
        }
        else if (num < 0)
        {
            count_n++;
        }
        else // No need to check if num == 0, it's the only option left!
        {
            count_z++;
        }
    }

    printf("\n--- RESULTS ---\n");
    printf("Positive numbers: %d\n", count_p);
    printf("Negative numbers: %d\n", count_n);
    printf("Zeros:            %d\n", count_z);

    return 0;
}
