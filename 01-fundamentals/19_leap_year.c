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
    int year;
    printf("Enter a year:");
    scanf("%d",&year);

    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year\n",year);
    }
    else{
        printf("%d is not a leap year\n",year);
    }

    return 0 ;

}