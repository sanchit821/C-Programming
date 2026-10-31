// Main Concept: Global state + function calls
// Target Time: 20 min
// Create a menu-driven program where every time the user performs an operation, a global operation counter increases. Display the total number of operations when the user exits.


// #include<stdio.h>



// int main()
// {
//     int choice, count = 0;
//     char name[15];

//     printf("Enter your choice: ");
//     scanf("%d", &choice);
//     do
//     {
//         printf("\n\n1. Tell your name: \n");
//         printf("2. Exit\n");


//         switch (choice)
//         {
//         case 1:
//             printf("Enter your name: ");
//             scanf("%s", name);
//             count++;
//             break;

//         case 2:
//             printf("Exit\n");   
//             printf("The total number of operations performed by user are %d", count); 
//             break;

//         default:
//             printf("Choice number only 1 and 2\n");
//             break;
//         }

//     } while(choice != 2);

//     return 0;
    
// }




























#include <stdio.h>

// 1. GLOBAL STATE DEFINITION
// Declared outside all functions so any block can access or modify it
int global_operation_count = 0; 

// Function Declarations
void handle_name_operation(void);

int main()
{
    int choice;

    // Fixed: The loop contains the prompt so choice updates every iteration
    do
    {
        printf("\n---------- Menu ----------\n");
        printf("1. Tell your name\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            handle_name_operation(); // Function Call handles the operation
            break;

        case 2:
            printf("\nExiting program...\n");   
            // Accessing the global counter directly on exit
            printf("The total number of operations performed: %d\n", global_operation_count); 
            break;

        default:
            printf("Invalid choice! Choose option 1 or 2.\n");
            break;
        }

    } while(choice != 2);

    return 0;
}

// 2. MODULAR FUNCTION IMPLEMENTATION
void handle_name_operation(void)
{
    char name[15];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    // Modifying the global variable state
    global_operation_count++; 
}
