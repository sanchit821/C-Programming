// 25. Unit Converter
// Topic: switch-case, menu-driven programming, arithmetic operations
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to create a unit conversion menu.
// Allow the user to select a conversion between different
// units, such as kilometres to metres, metres to centimetres,
// or kilograms to grams.
//
// Example:
// Input:
// 1. Kilometres to Metres
// 2. Metres to Centimetres
// 3. Kilograms to Grams
//
// Enter choice: 1
// Enter value: 5
//
// Expected Output:
// Distance = 5000 metres
#include<stdio.h>

int main()
{
    int choice;
    float km, m, cm, kg, g, hr, min;

    do 
    {
        printf("\n\n------ menu-driven unit Conversion ------\n\n");
        printf("1. convert kilometre into meter\n");
        printf("2. convert meter into centimetre\n");
        printf("3. convert kilogram into gram\n");
        printf("4. convert hours into minutes\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter kilometer to convert into meter:\n");
            scanf("%f", &km);
            m = km * 1000;
            printf("%f" " kilometer = " "%f" " meter",km,m);
            break;

        case 2:
            printf("Enter meter to convert into centimeter:\n");
            scanf("%f", &m);
            cm = m * 100;
            printf("%f" " meter = " "%f" " centimeter",m,cm);
            break; 
            
        case 3:
            printf("Enter kilogram to convert into gram:\n");
            scanf("%f", &kg);
            g = kg * 1000;
            printf("%f" " kilogram = " "%f" " gram",kg,g);
            break;    

        case 4:
            printf("Enter hours to convert into minutes:\n");
            scanf("%f", &hr);
            min = hr * 60;
            printf("%f" " hours = " "%f" " minutes",km,m);
            break; 
            
        case 5:
            printf("Thank you for using the Converter.\n");
            break;    
        
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 5);

    return 0;


}












// Create a menu-driven unit converter for km→m, m→cm, kg→g, and hours→minutes

#include<stdio.h>

int main()
{
    int choice;
    float km, m, cm, kg, g, hr, min;

    do 
    {
        printf("\n\n------ menu-driven unit Conversion ------\n\n");
        printf("1. convert kilometre into meter\n");
        printf("2. convert meter into centimetre\n");
        printf("3. convert kilogram into gram\n");
        printf("4. convert hours into minutes\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter kilometer to convert into meter:\n");
            scanf("%f", &km);
            m = km * 1000;
            printf("%.2f kilometer = %.2f meter\n", km, m);
            break;

        case 2:
            printf("Enter meter to convert into centimeter:\n");
            scanf("%f", &m);
            cm = m * 100;
            printf("%.2f meter = %.2f centimeter\n", m, cm);
            break; 
            
        case 3:
            printf("Enter kilogram to convert into gram:\n");
            scanf("%f", &kg);
            g = kg * 1000;
            printf("%.2f kilogram = %.2f gram\n", kg, g);
            break;    

        case 4:
            printf("Enter hours to convert into minutes:\n");
            scanf("%f", &hr);
            min = hr * 60;
            // FIXED: Changed km and m to hr and min
            printf("%.2f hours = %.2f minutes\n", hr, min);
            break; 
            
        case 5:
            printf("Thank you for using the Converter.\n");
            break;    
        
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}









// using function 



// Upgraded menu-driven unit converter with functions and validation
#include <stdio.h>

// --- FUNCTION DECLARATIONS ---
float get_positive_input(const char* prompt);
void convert_km_to_m();
void convert_m_to_cm();
void convert_kg_to_g();
void convert_hr_to_min();

int main()
{
    int choice;

    do 
    {
        printf("\n\n------ Menu-Driven Unit Conversion ------\n\n");
        printf("1. Convert kilometre into meter\n");
        printf("2. Convert meter into centimetre\n");
        printf("3. Convert kilogram into gram\n");
        printf("4. Convert hours into minutes\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            convert_km_to_m();
            break;
        case 2:
            convert_m_to_cm();
            break; 
        case 3:
            convert_kg_to_g();
            break;    
        case 4:
            convert_hr_to_min();
            break; 
        case 5:
            printf("Thank you for using the Converter.\n");
            break;    
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}

// --- FUNCTION DEFINITIONS ---

// Helper function that forces the user to enter a positive number
float get_positive_input(const char* prompt) 
{
    float value;
    do {
        printf("%s", prompt);
        scanf("%f", &value);
        if (value < 0) {
            printf("Error: Value cannot be negative. Try again.\n");
        }
    } while (value < 0); // Keeps looping until a valid number is given
    return value;
}

void convert_km_to_m() 
{
    float km = get_positive_input("Enter kilometer to convert into meter: ");
    float m = km * 1000;
    printf("%.2f kilometer = %.2f meter\n", km, m);
}

void convert_m_to_cm() 
{
    float m = get_positive_input("Enter meter to convert into centimeter: ");
    float cm = m * 100;
    printf("%.2f meter = %.2f centimeter\n", m, cm);
}

void convert_kg_to_g() 
{
    float kg = get_positive_input("Enter kilogram to convert into gram: ");
    float g = kg * 1000;
    printf("%.2f kilogram = %.2f gram\n", kg, g);
}

void convert_hr_to_min() 
{
    float hr = get_positive_input("Enter hours to convert into minutes: ");
    float min = hr * 60;
    printf("%.2f hours = %.2f minutes\n", hr, min);
}
