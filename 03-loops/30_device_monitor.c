// Create a mini device-monitoring program: repeatedly accept temperature and voltage readings, display whether each is safe, and stop when the user chooses Exit.


#include<stdio.h>

int main()
{
    int temperature, voltage, choice, safe_temp = 95, safe_voltage = 50;

    do
    {
        printf("\n\n------- device monitoring -------\n\n");
        printf("1. Enter temperature\n");
        printf("2. Enter voltage\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }

        switch (choice)
        {
        case 1:
            printf("Enter your temperature: ");
            scanf("%d", &temperature);
            if ( temperature <= safe_temp)
            {
                printf("Temperature is safe\n");
            }
            else
            {
                printf("Temperature is not safe\n");
            }
            break;

        case 2:
            printf("Enter your voltage: ");
            scanf("%d", &voltage);
            if ( voltage <= safe_voltage)
            {
                printf("Voltage is safe\n");
            }
            else
            {
                printf("Voltage is not safe\n");
            }
            break;

        case 3:
            printf("Thank you for using device monitoring\n");  
            break;
        
        default:
            printf("Choose btw ( 1 to 3)\n");
            break;
        }


    } while ( choice != 3);
    
}