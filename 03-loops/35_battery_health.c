// A device has 5 batteries. For each battery, enter its voltage. A battery is considered healthy if voltage is between 3.0V and 4.2V. 
// Display the status of every battery and the total healthy batteries.

#include<stdio.h>

int main()
{
    int count = 0;
    float batterie_1, batterie_2, batterie_3, batterie_4, batterie_5;
    float voltage = 0;

    for( int i = 1; i <= 5; i++)
    {
        printf("Enter voltage: ");
        scanf("%f", &voltage);

        if( voltage >= 3.0 && voltage <= 4.2)
        {
            count += 1;
        }
        batterie_1 = voltage;
        batterie_2 = voltage;
        batterie_3 = voltage;
        batterie_4 = voltage;
        batterie_5 = voltage;


    }
    printf("\n\n------- States of Batteries --------\n\n");
    printf("The state of Batter_1 is %.2f\n", batterie_1);
    printf("The state of Batter_2 is %.2f\n", batterie_2);
    printf("The state of Batter_3 is %.2f\n", batterie_3);
    printf("The state of Batter_4 is %.2f\n", batterie_4);
    printf("The state of Batter_5 is %.2f\n\n", batterie_5);
    printf("The Total healthy batteries are %d\n", count);

    return 0;
}






#include <stdio.h>

int main()
{
    int count = 0;
    // Use an array to store 5 different voltages easily
    float batteries[5]; 

    // Loop to collect voltages
    for(int i = 0; i < 5; i++)
    {
        printf("Enter voltage for battery %d: ", i + 1);
        scanf("%f", &batteries[i]);

        // Check if the current battery is healthy
        if(batteries[i] >= 3.0 && batteries[i] <= 4.2)
        {
            count += 1;
        }
    }

    printf("\n\n------- States of Batteries --------\n\n");
    // Loop to print the stored voltages
    for(int i = 0; i < 5; i++)
    {
        printf("The state of Batter_%d is %.2f\n", i + 1, batteries[i]);
    }
    
    printf("\nThe Total healthy batteries are %d\n", count);
    
    return 0;
}
