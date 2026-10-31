// Create a program that keeps accepting marks until the user enters -1. Then display the average of all entered marks.

#include<stdio.h>

int main()
{
    int Total_marks = 0, marks = 0, counter = 0;
    double avg;
    printf("Enter marks: ");

    while( marks != -1)
    {
        scanf("%d", &marks);

        Total_marks += marks;
        counter += 1;

    }
    avg = Total_marks / counter;
    printf("Average marks are: %f\n", avg);



    return 0;

}




#include <stdio.h>

int main() 
{
    int Total_marks = 0, marks = 0, counter = 0;
    double avg; // Changed to double for decimal precision

    printf("Enter marks (enter -1 to stop):\n");

    while (1) // Loop indefinitely until broken
    {
        scanf("%d", &marks);

        if (marks == -1) 
        {
            break; // Immediately exit before adding -1 to the totals
        }

        Total_marks += marks;
        counter += 1;
    }

    // Check to prevent division by zero if user inputs -1 immediately
    if (counter > 0) 
    {
        avg = (double)Total_marks / counter; // Typecast to keep decimals
        printf("Average marks are: %.2f\n", avg); // %.2f prints 2 decimal places
    } 
    else 
    {
        printf("No marks were entered.\n");
    }

    return 0;
}
