// Create a menu-driven temperature converter that keeps running until the user chooses Exit.




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