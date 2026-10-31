// 3. Temperature Menu
// Topic: switch-case, menu-driven programming, arithmetic formulas
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to create a temperature conversion menu.
// Allow the user to select a conversion such as Celsius
// to Fahrenheit or Fahrenheit to Celsius.
//
// Example:
// Input:
// 1. Celsius to Fahrenheit
// 2. Fahrenheit to Celsius
//
// Enter choice: 1
// Enter temperature: 25
//
// Expected Output:
// Temperature in Fahrenheit = 77.00

// #include<stdio.h>

// int main()
// {
//     int choice;
//     float celsius, fahrenheit, kelvin;

//     do
//     {
//         printf("------Temperature Conversion-------");
//         printf("1. Celsius→Fahrenheit\n");
//         printf("2. Fahrenheit→Celsius\n");
//         printf("3. Celsius→Kelvin\n");
//         printf("4. Exit\n");

//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter temperature in calsius: ");
//             scanf("%f", &celsius);
//             fahrenheit = celsius * 9/5 + 32;
//             printf("%f" "is" " %f .2f\n", celsius,fahrenheit); // %.2f limits output to 2 decimal places
//             break;

//         case 2:
//             printf("Enter temperature in Fahrenheit: ");
//             scanf("%f", &fahrenheit);
//             celsius = fahrenheit - 32 * 5/9;
//             printf("%f" "is" " %f .2f\n",fahrenheit,celsius);
//             break;
            
//         case 3:
//             printf("Enter temperature in calsius: ");
//             scanf("%f", &celsius);
//             kelvin = celsius + 273.15;
//             printf("%f" "is" " %f .2f\n", celsius,kelvin);  
            
//         case 4:
//             printf("Thank you for using the Calculator.\n");
//             break;    

//         default:
//             printf("Invalid choice. Please try again.\n");
//             break;    
            
//         }
    
//     } while (choice != 4);

//     return 0;
    
// }











#include <stdio.h>

int main()
{
    int choice;
    float celsius, fahrenheit, kelvin;

    do
    {
        printf("\n------ Temperature Conversion ------\n");
        printf("1. Celsius -> Fahrenheit\n");
        printf("2. Fahrenheit -> Celsius\n");
        printf("3. Celsius -> Kelvin\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);

            fahrenheit = celsius * 9.0 / 5.0 + 32;

            printf("%.2f Celsius is %.2f Fahrenheit\n",
                   celsius, fahrenheit);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * 5.0 / 9.0;

            printf("%.2f Fahrenheit is %.2f Celsius\n",
                   fahrenheit, celsius);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);

            kelvin = celsius + 273.15;

            printf("%.2f Celsius is %.2f Kelvin\n",
                   celsius, kelvin);
            break;

        case 4:
            printf("Thank you for using the Temperature Converter.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }

    } while (choice != 4);

    return 0;
}