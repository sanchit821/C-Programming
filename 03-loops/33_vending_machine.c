// A vending machine accepts coins of ₹1, ₹2, ₹5 and ₹10. 
// Keep accepting coins until the total reaches or exceeds ₹50. Display the number of coins and total collected.

#include<stdio.h>

int main()
{
    int choice, user_input, count = 0, count1 = 0, count2 = 0, count5 = 0, count10 = 0, Total_count = 0;

    while (Total_count != 50)
    {
        printf("Enter coins 1, 2, 5 or 10 only: ");
        scanf("%d", &user_input);

        if (user_input != 1 && user_input != 2 && user_input != 5 && user_input != 10)
        {
            printf("Invalid input! Please enter 1, 2, 5, or 10.\n");
            // your code to handle invalid input (like 'continue;')
        }


        count++;


        if( user_input == 1)
        {
            count1++;
        }

        else if (user_input == 2)
        {
            count2++;
        }
        else if (user_input == 5)
        {
            count5++;
        }
        else if (user_input == 10)
        {
            count10++;
        }
        else
        {
            printf("Wrong input");
        } 
    }
    Total_count = count1 + count2 + count5 + count10;

    if( count > 0)
    {
        printf("The Coins of rupees 1 are: %d", count1);
        printf("The Coins of rupees 2 are: %d", count2);
        printf("The Coins of rupees 5 are: %d", count5);
        printf("The Coins of rupees 10 are: %d", count10);
        printf("The Total coins collected are: %d", Total_count);
    }

    return 0;


    


}







#include<stdio.h>

int main()
{
    // Clear variable names: 'total_money' tracks rupees, 'total_coins' tracks amount of coins
    int user_input;
    int count1 = 0, count2 = 0, count5 = 0, count10 = 0;
    int total_money = 0, total_coins = 0;

    printf("------- Vending Machine -------\n");

    // Loop continues until total money collected reaches or goes past 50
    while (total_money < 50)
    {
        printf("Current Balance: Rs. %d. Enter coin (1, 2, 5, 10): ", total_money);
        scanf("%d", &user_input);

        // Validation block
        if (user_input != 1 && user_input != 2 && user_input != 5 && user_input != 10)
        {
            printf("Invalid input! Please enter 1, 2, 5, or 10.\n\n");
            continue; // Skip the rest of the loop and ask for input again
        }

        // Process valid inputs
        if (user_input == 1)
        {
            count1++;
            total_money += 1;
        }
        else if (user_input == 2)
        {
            count2++;
            total_money += 2;
        }
        else if (user_input == 5)
        {
            count5++;
            total_money += 5;
        }
        else if (user_input == 10)
        {
            count10++;
            total_money += 10;
        }
    }

    // Calculate total coins spent after loop ends
    total_coins = count1 + count2 + count5 + count10;

    // Final Display output formatting with newlines (\n) for readability
    printf("\n============ TRANSACTION SUCCESS ============\n");
    printf("Coins of Rs 1  : %d\n", count1);
    printf("Coins of Rs 2  : %d\n", count2);
    printf("Coins of Rs 5  : %d\n", count5);
    printf("Coins of Rs 10 : %d\n", count10);
    printf("---------------------------------------------\n");
    printf("Total individual coins spent: %d\n", total_coins);
    printf("Total amount collected      : Rs. %d\n", total_money);
    printf("=============================================\n");

    return 0;
}
