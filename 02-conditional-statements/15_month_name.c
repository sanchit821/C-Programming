// 15. Month Name
// Topic: switch-case, break statement
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to accept a number from 1 to 12
// and display the corresponding month name.
//
// Example:
// Input:
// Enter month number: 10
//
// Expected Output:
// October

#include <stdio.h>

int main() {
    // 1. Create the array of string pointers
    const char* myList[] = {"jan", "feb", "march", "april", "may", "june", "july", "aug", "sep", "oct", "nov", "dec"};
    
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
    printf("8. %s\n", myList[7]);
    printf("9. %s\n", myList[8]);
    printf("10. %s\n", myList[9]);
    printf("11. %s\n", myList[10]);
    printf("12. %s\n", myList[11]);


    
    printf("\nEnter your choice (1-12): ");
    scanf("%d", &choice);


    switch(choice) {
        case 1:
            // choice - 1 converts menu number (1) to array index (0)
            printf("This month is: %s\n", myList[choice - 1]); 
            break;
        case 2:
            printf("This month is: %s\n", myList[choice - 1]);
            break;
        case 3:
            printf("This month is: %s\n", myList[choice - 1]);
            break;
        case 4:
            printf("This month is: %s\n", myList[choice - 1]);
            break;
        case 5:
            printf("This month is: %s\n", myList[choice - 1]);
            break;
        case 6:
            printf("This month is: %s\n", myList[choice - 1]);
            break;
        case 7:
            printf("This month is: %s\n", myList[choice - 1]);
            break;
        case 8:
            printf("This month is: %s\n", myList[choice - 1]);
            break;  
        case 9:
            printf("This month is: %s\n", myList[choice - 1]);
            break;  
        case 10:
            printf("This month is: %s\n", myList[choice - 1]);
            break;  
        case 11:
            printf("This month is: %s\n", myList[choice - 1]);
            break;  
        case 12:
            printf("This month is: %s\n", myList[choice - 1]);
            break;  


        default:
            printf("Invalid choice!\n");
    }


    return 0;
}







#include <stdio.h>

int main() {
    // 1. Array of string pointers for months
    const char* myList[] = {"jan", "feb", "march", "april", "may", "june", "july", "aug", "sep", "oct", "nov", "dec"};
    int choice;
    
    // 2. Display the header
    printf("---- MONTHS OF THE YEAR ----\n");
    
    // 3. Dynamically display the menu using a loop
    for (int i = 0; i < 12; i++) {
        printf("%d. %s\n", i + 1, myList[i]);
    }
    
    // 4. Get user input
    printf("\nEnter your choice (1-12): ");
    scanf("%d", &choice);

    // 5. Direct array lookup with bounds checking (removes the switch completely)
    if (choice >= 1 && choice <= 12) {
        printf("This month is: %s\n", myList[choice - 1]);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
