// Simulate an ATM menu that repeatedly allows: Check Balance, Deposit, Withdraw, Exit.

#include<stdio.h>

int main()
{
    int choice;
    float balance = 1000, amount;

    do 
    {
        printf("\n\n--------ATM MENU--------\n\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n\n");

        printf("Enter your choice btw (1 to 4): ");
        scanf("%d", &choice);


        switch (choice)
        {
            case 1:
            printf("Your Balance is %.2f\n", balance);
            break;
            
            
            case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) 
            {
                balance += amount;
                printf("Successfully deposited $%.2f\n\n", amount);
            }
            else 
            {
                printf("Invalid amount.\n\n");
            }


            case 3:
            printf("Enter amount to Withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) 
            {
                balance -= amount;
                scanf("%f", &amount);
                printf("Successfully withdrew %.2f\n", amount);
            } 
            else 
            {
                printf("Invalid or insufficient funds.\n");
            }


            case 4:
            printf("Thank you for using ATM\n");
            break;    
            
            
            default:
            printf("Invalid choice. Please try again.\n");
            break;
        } 

    } while (choice != 4);
    return 0;

    
    
}