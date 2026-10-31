// A temperature sensor records 7 readings. Calculate the average temperature and display whether it is above 30°C.

#include<stdio.h>

int main()
{
    int temp, avg, total_temp = 0;

   

    for ( int i = 0; i < 7; i++)
    {
        printf("Enter temperature: ");
        scanf("%d", &temp);

        total_temp += temp;


    }

    avg = total_temp / 7;
    if( avg > 30)
    {
        printf("The average temperature is %d and it's above 30°C.\n", avg);
    }
    else
    {
        printf("The average temperature is %d and it's not above 30°C.\n", avg);
    }
    return 0;

    

}