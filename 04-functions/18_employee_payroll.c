// Main Concept: Function-based program structure
// Target Time: 25 min
// Create a calculator where each operation is implemented as a separate function.

// Include at least:

// Addition
// Subtraction
// Multiplication
// Division
// Remainder

// should primarily handle the menu and function calls.


#include <stdio.h>
#include <math.h> // Required for fmod() to calculate float remainder

// Function prototypes
void Addition(float num1, float num2);
void Subtraction(float num1, float num2);
void Multiplication(float num1, float num2);
void Division(float num1, float num2);
void Remainder(float num1, float num2);

int main()
{
    int choice;
    float num1, num2;

    // Display a clear menu for the user
    printf("--- Calculator Menu ---\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n6. Exit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice); // Fixed parentheses

    // Handle menu selection and function routing
    switch (choice)
    {
    case 1:
        printf("Enter num1 and num2: ");
        scanf("%f %f", &num1, &num2); // Added missing & for num2
        Addition(num1, num2);
        break;

    case 2:
        printf("Enter num1 and num2: ");
        scanf("%f %f", &num1, &num2); // Added missing & for num2
        Subtraction(num1, num2);
        break;
        
    case 3:
        printf("Enter num1 and num2: ");
        scanf("%f %f", &num1, &num2); // Added missing & for num2
        Multiplication(num1, num2);
        break;    
    
    case 4:
        printf("Enter num1 and num2: ");
        scanf("%f %f", &num1, &num2); // Added missing & for num2
        Division(num1, num2);
        break;
        
    case 5:
        printf("Enter num1 and num2: ");
        scanf("%f %f", &num1, &num2); // Added missing & for num2
        Remainder(num1, num2);
        break;

    case 6:
        printf("\nThank you for using Calculator\n");
        break;
        
    default:
        printf("\nChoose between 1 to 6 only!\n");
        break;
    }

    return 0;
}

// Function implementations
void Addition(float num1, float num2)
{
    float sum = num1 + num2;
    printf("Addition of %.2f and %.2f is: %.2f\n", num1, num2, sum);
}

void Subtraction(float num1, float num2)
{
    float sub = num1 - num2;
    printf("Subtraction of %.2f and %.2f is: %.2f\n", num1, num2, sub);
}

void Multiplication(float num1, float num2)
{
    float multi = num1 * num2;
    printf("Multiplication of %.2f and %.2f is: %.2f\n", num1, num2, multi);
}

void Division(float num1, float num2)
{
    if (num2 != 0) {
        float div = num1 / num2;
        printf("Division of %.2f and %.2f is: %.2f\n", num1, num2, div);
    } else {
        printf("Error: Division by zero is not allowed!\n");
    }
}

void Remainder(float num1, float num2)
{
    if (num2 != 0) {
        // Fixed: Used fmod from math.h because % cannot handle float types
        float rem = fmod(num1, num2); 
        printf("Remainder of %.2f and %.2f is: %.2f\n", num1, num2, rem);
    } else {
        printf("Error: Cannot calculate remainder when dividing by zero!\n");
    }
}
