// Main Concept: Functions + decision making
// Target Time: 20 min
// Create functions for a simple traffic-signal controller.
// Input:
// 1 → Red
// 2 → Yellow
// 3 → Green
// Each function should return the appropriate instruction for a vehicle/driver.


#include<stdio.h>

void Redsignal();
void Yellowsignal();
void Greensignal();

int main()
{
    int user_input;

    printf("\n\nEnter a number from 1 to 3... 1 for Red, 2 for Yellow, 3 for Green: \n");
    scanf("%d", &user_input);

    if( user_input == 1)
    {
        Redsignal();
    }
    else if ( user_input == 2)
    {
        Yellowsignal();
    }
    else if ( user_input == 3)
    {
        Greensignal();
    }
    else
    {
        printf("Invalid input! Please enter 1, 2, or 3.\n");
    }

    return 0;
    
}


void Redsignal()
{
    printf("Signal is Red, wait!\n");
}

void Yellowsignal()
{
    printf("Signal is Yellow, start your vehicle!\n");
}

void Greensignal()
{
    printf("Signal is Green you can gooooo!\n");
}

