// Simulate a traffic signal for 3 cycles: Red → Yellow → Green. Display each signal in every cycle.

#include<stdio.h>

int main()
{

    for( int cycle = 1; cycle <= 3; cycle++)
    {
        printf("--- TRAFFIC SIGNAL CYCLE %d ---\n", cycle);

        for( int i = 1; i <= 3; i++)
        {
            if( i == 1)
            {
                printf("Traffic signal is RED\n");
            }
            else if (i == 2)
            {
                printf("Traffic signal is YELLOW\n");
            }
            else
            {
                printf("Traffic signal is GREEN\n");
            }
        }
        printf("\n");
    
    }
    return 0;

}
   
