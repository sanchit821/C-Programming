// 21. Calculator Using Switch
// Topic: switch-case, arithmetic operators, break statement
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to perform arithmetic calculations
// using a switch statement.
// Accept the user's choice and the required operands,
// then display the calculated result.
//
// Example:
// Input:
// Enter choice: 3
// Enter two numbers: 5 4
//
// Expected Output:
// Result = 20


#include<stdio.h>

int main()
{
    int choice;
    int num1, num2, sum, sub, multiply, division, modulo;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    do
    { 
        printf("\n*** calculator ***\n");
        printf("1. Sum\n");
        printf("2. Sub\n");
        printf("3. Multiply\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            sum = num1 + num2;
            printf("Sum of %d & %d is: %d\n", num1, num2, sum);
            break;
        case 2:
            sub = num1 - num2;
            printf("Subtraction of %d & %d is: %d\n", num1, num2, sub);
            break;
        case 3:
            multiply = num1 * num2;
            printf("Multiplication of %d & %d is: %d\n", num1, num2, multiply);
            break;
        case 4:
            // Prevent division by zero crash
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                division = num1 / num2;
                printf("Division of %d & %d is: %d\n", num1, num2, division);
            }
            break;
        case 5:
            // Prevent modulo by zero crash
            if (num2 == 0) {
                printf("Error: Modulo by zero is not allowed.\n");
            } else {
                modulo = num1 % num2;
                printf("Modulo of %d & %d is: %d\n", num1, num2, modulo);
            }
            break;
        case 6:
            printf("Thank you for using the Calculator.\n");
            break; // Added missing break to stop fall-through
        
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        } 
    } while (choice != 6);

    return 0;
}
