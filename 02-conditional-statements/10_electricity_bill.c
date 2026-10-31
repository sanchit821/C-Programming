// 10. Electric Bill
// Topic: else-if ladder, arithmetic operations, conditions
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to calculate an electricity bill
// based on the number of units consumed.
// Apply the charges according to the specified
// electricity tariff slabs.
//
// Example:
// Input:
// Enter units consumed: 150
//
// Expected Output:
// Total electricity bill = [Calculated Amount]


#include<stdio.h>

int main()
{
    int units, bill;
    printf("Enter you units:");
    scanf("%d", &units);

    if( units != 0)
    {
        bill = units * 5.56;
    }
    else
    {
        printf("Wrong input");
    }

    printf("Your bill of this mounth is %d\n", bill);

    return 0;
}