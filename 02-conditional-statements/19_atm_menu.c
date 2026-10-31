// 19. ATM Menu
// Topic: switch-case, menu-driven programming, arithmetic operations
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to create a simple ATM menu
// with options such as checking balance, depositing money,
// and withdrawing money.
// Use a switch statement to perform the selected operation.
//
// Example:
// Input:
// Select an option:
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
//
// Enter choice: 1
//
// Expected Output:
// Available Balance = 5000


#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00, amount;

    do {
        printf("\n*** ATM Menu ***\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Successfully deposited $%.2f\n", amount);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f\n", amount);
                } else {
                    printf("Invalid or insufficient funds.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


