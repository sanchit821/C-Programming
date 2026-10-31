// 24. Food Menu
// Topic: switch-case, menu-driven programming, arithmetic operations
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to display a food menu with different
// food items and their prices.
// Accept the user's choice and display the selected
// food item and its price.
//
// Example:
// Input:
// 1. Pizza - Rs. 150
// 2. Burger - Rs. 80
// 3. Sandwich - Rs. 60
//
// Enter choice: 2
//
// Expected Output:
// Selected item: Burger
// Price: Rs. 80
#include <stdio.h>

int main() 
{
    int choice;

    printf("\n------ Welcome to India Café ------\n\n");
    printf("1. Peri-Peri French Fries  - ₹120.00\n");
    printf("2. Cheese Corn Sandwich    - ₹150.00\n");
    printf("3. Paneer Tikka Wrap       - ₹180.00\n");
    printf("4. White Sauce Pasta       - ₹220.00\n");
    printf("5. Masala Cheese Maggi     - ₹90.00\n\n");

    printf("Enter the item number you want to order (1-5): ");
    scanf("%d", &choice);

    printf("\n--- Order Summary ---\n");
    switch(choice) 
    {
        case 1:
            printf("Selected Item: Peri-Peri French Fries\n");
            printf("Total Bill: ₹120.00\n");
            break;
            
        case 2:
            printf("Selected Item: Cheese Corn Sandwich\n");
            printf("Total Bill: ₹150.00\n");
            break;
            
        case 3:
            printf("Selected Item: Paneer Tikka Wrap\n");
            printf("Total Bill: ₹180.00\n");
            break;
            
        case 4:
            printf("Selected Item: White Sauce Pasta\n");
            printf("Total Bill: ₹220.00\n");
            break;
            
        case 5:
            printf("Selected Item: Masala Cheese Maggi\n");
            printf("Total Bill: ₹90.00\n");
            break;
            
        default:
            printf("Invalid selection! Please choose a number between 1 and 5.\n");
            break;
    }

    printf("Thank you for visiting India Café!\n");
    return 0;
}
