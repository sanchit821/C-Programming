// Create a menu-driven system where the user can repeatedly add money, spend money, check balance, or exit. Prevent spending when the balance is insufficient.

#include<stdio.h>

int main()
{
    int choice;
    float balance = 1000, money;

    do
    {
        printf("\n\n--------MENU-DRIVEN--------\n\n");
        printf("1. Check Balance\n");
        printf("2. Add Money\n");
        printf("3. Spend Money\n");
        printf("4. Exit\n\n");

        printf("Enter your choice btw (1 to 4): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nYour balance is %f\n", balance);
            break;
         
        case 2:
            printf("Enter amount to add: ");
            scanf("%f", &money);
            balance += money;
            printf("Successfully Money Add %f\n", money);
            break;

        case 3: 
            printf("Enter amount to spend: ");
            scanf("%f", &money);
            balance -= money;
            printf("Successfully Money Spend %f\n", money);
            break;
         
        case 4:
            printf("Thank you for using menu driven\n");    
            break;
        
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 4);
    
}