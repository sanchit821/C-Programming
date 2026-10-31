// 14. Day Name
// Topic: switch-case, break statement
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to accept a number from 1 to 7
// and display the corresponding day of the week.
// Consider 1 as Monday and 7 as Sunday.
//
// Example:
// Input:
// Enter day number: 3
//
// Expected Output:
// Wednesday

#include <stdio.h>

int main() {
    // 1. Create the array of string pointers
    const char* myList[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    int choice;
    
    // 2. Display the menu dynamically using the array
    printf("----DAY OF WEEK----\n");
    printf("1. %s\n", myList[0]);
    printf("2. %s\n", myList[1]);
    printf("3. %s\n", myList[2]);
    printf("4. %s\n", myList[3]);
    printf("5. %s\n", myList[4]);
    printf("6. %s\n", myList[5]);
    printf("7. %s\n", myList[6]);

    
    printf("\nEnter your choice (1-7): ");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            // choice - 1 converts menu number (1) to array index (0)
            printf("Today is: %s\n", myList[choice - 1]); 
            break;
        case 2:
            printf("Today is: %s\n", myList[choice - 1]);
            break;
        case 3:
            printf("Today is: %s\n", myList[choice - 1]);
            break;
        case 4:
            printf("Today is: %s\n", myList[choice - 1]);
            break;
        case 5:
            printf("Today is: %s\n", myList[choice - 1]);
            break;
        case 6:
            printf("Today is: %s\n", myList[choice - 1]);
            break;
        case 7:
            printf("Today is: %s\n", myList[choice - 1]);
            break;    
        default:
            printf("Invalid choice!\n");
    }


    return 0;
}






