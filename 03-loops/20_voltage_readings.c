// A device records 10 voltage readings. Take all 10 readings and find the highest voltage.

#include<stdio.h>

int main()
{
    int highest_volage, voltage;
   
    for( int i = 0; i < 10; i++)
    {
        printf("Enter voltage: ");
        scanf("%d", &voltage);
        if( voltage >= highest_volage)
        {
            highest_volage = voltage;
        }
    }
    printf("Highest voltage is %d\n", highest_volage);
    return 0;

}








#include <stdio.h>

int main()
{
    // Fix: Initialized highest_voltage to 0 so the first input easily overrides it
    int highest_voltage = 0, voltage;
   
    for (int i = 0; i < 10; i++)
    {
        printf("Enter voltage %d: ", i + 1); // Small tweak to show reading number (1 to 10)
        scanf("%d", &voltage);
        
        if (voltage >= highest_voltage)
        {
            highest_voltage = voltage;
        }
    }
    printf("\nHighest voltage is %d\n", highest_voltage);
    return 0;
}
