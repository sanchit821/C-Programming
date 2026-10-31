// A temperature-monitoring device takes readings until the user enters -999. Find the highest and lowest valid temperature and how many readings were taken.
// Sentinel-controlled while + min/max

#include<stdio.h>

int main()
{
    int count = 0, reading, max_reading = -9999, min_reading = 9999;
    printf("------- temperature monitoring -------\n");
    
    while (1)
    {

        printf("Enter your reading: ");
        scanf("%d", &reading);


        if ( reading == -999)
        {
            break;
        }

        count++;

         // Update maximum if current reading is higher
        if (reading > max_reading)
        {
            max_reading = reading;
        }
        
        // Update minimum if current reading is lower
        if (reading < min_reading)
        {
            min_reading = reading;
        }
        
    } 


    if (count > 0) 
    {
        printf("\nTotal valid readings taken: %d\n", count);
        printf("Maximum reading is %d\n", max_reading);
        printf("Minimum reading is %d\n", min_reading);
    } 
    else 
    {
        printf("\nNo valid readings were entered.\n");
    }
    return 0;




}

