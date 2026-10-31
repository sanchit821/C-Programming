// 20. Electrical Bill
// Topic: if-else ladder, arithmetic expressions, conditions
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to calculate an electricity bill
// based on the number of units consumed.
// Apply the electricity charges according to the
// specified unit-based tariff slabs.
//
// Example:
// Input:
// Enter units consumed: 150
//
// Output:
// Total electricity bill = [Calculated Amount]

#include <stdio.h>

int main()
{
    float units, Total;

    printf("Enter your units: ");
    scanf("%f", &units);

    if (units <= 100)
    {
        Total = units * 5;
    }
    else if (units <= 200)
    {
        Total = units * 7;
    }
    else
    {
        Total = units * 10;
    }

    printf("Total Bill = %.2f\n", Total);

    return 0;
}