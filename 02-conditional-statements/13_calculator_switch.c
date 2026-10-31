// 13. Calculator Using Switch
// Topic: switch-case, arithmetic operators, break statement
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to create a simple calculator
// that accepts two numbers and an operator (+, -, *, /).
// Use a switch statement to perform the selected operation.
//
// Example:
// Input:
// Enter two numbers: 20 10
// Enter operator: +
//
// Expected Output:
// Result = 30


#include <stdio.h>

int main() {
    // 1. Create the array of string pointers
    const char* myList[] = {"biscuit", "Pizza", "Pasta", "Maggie", "Coffee"};
    
    int choice;
    
    // 2. Display the menu dynamically using the array
    printf("--- MENU ---\n");
    printf("1. %s\n", myList[0]);
    printf("2. %s\n", myList[1]);
    printf("3. %s\n", myList[2]);
    printf("4. %s\n", myList[3]);
    printf("5. %s\n", myList[4]);
    
    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    // 3. Use switch-case to handle the choice
    switch(choice) {
        case 1:
            // choice - 1 converts menu number (1) to array index (0)
            printf("You ordered: %s\n", myList[choice - 1]); 
            break;
        case 2:
            printf("You ordered: %s\n", myList[choice - 1]);
            break;
        case 3:
            printf("You ordered: %s\n", myList[choice - 1]);
            break;
        case 4:
            printf("You ordered: %s\n", myList[choice - 1]);
            break;
        case 5:
            printf("You ordered: %s\n", myList[choice - 1]);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}














// #include<stdio.h>
// int main()
// {
//     const char* mylist[ ] ={ "biscuit", "pizza", "pasta", "maggie", "coffee" };

//     int choice;

//     printf("-------MENU------\n");
//     printf("1. %s", mylist[0]);
//     printf("2. %s", mylist[1]);
//     printf("3. %s", mylist[2]);
//     printf("4. %s", mylist[3]);
//     printf("5. %s", mylist[4]);

//     printf("\nEnter your choice (1 to 5):");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         printf("Your ordered %s\n", mylist[choice - 1]);
//         break;
    
//     case 2:
//         printf("Your ordered %s\n", mylist[choice - 1]);
//         break;
    
//     case 3:
//         printf("Your ordered %s\n", mylist[choice - 1]);
//         break;

//     case 4:
//         printf("Your ordered %s\n", mylist[choice - 1]);
//         break;

//    case 5:
//         printf("Your ordered %s\n", mylist[choice - 1]);
//         break;

//     default:
//         printf("Invalid choice!\n");
    
//     }

//     return 0;


// }