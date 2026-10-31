// Main Concept: Multiple functions + passing results between functions
// Target Time: 30 min

// Create an electricity-bill calculator.

// Break the program into functions for:

// Calculating the basic bill
// Calculating surcharge
// Displaying the bill

// The final bill should depend on the result returned by the previous functions.


#include<stdio.h>

float calculating_basic_bill(float unit);
float calculating_surcharge(float surchage);
void display_bill(float unit, float basic_bill, float surcharge, float total_bill);

int main()
{
    float Units, basic_bill, Surcharge, Total_bill;

    printf("Enter you units: ");
    scanf("%f", &Units);
    
    basic_bill = calculate_basic_bill(Units);
    Surcharge = calculating_surcharge(basic_bill);
    Total_bill = finalbill(Surcharge);
    display_bill(Units, basic_bill, Surcharge, Total_bill);


    return 0;
}


float calculating_basic_bill(float unit)
{
    if (unit <= 50) 
    {
        return unit * 0.50;
    } 
    else if (unit <= 150) 
    {
        return 25 + ((unit - 50) * 0.75);
    } 
    else if (unit <= 250) {
        return 100 + ((unit - 150) * 1.20);
    } 
    else 
    {
        return 220 + ((unit - 250) * 1.50);
    }
}

float calculating_surcharge(float surchage)
{
    return surchage * 0.20;
}

void display_bill(float unit, float basic_bill, float surcharge, float total_bill)
{
    printf("\n--- Bill Summary ---\n");
    printf("Total units consumed\n", unit);
    printf("The basic Bill is %.2f\n", basic_bill);
    printf("THe Surcharge are %.2f\n", surcharge);
    printf("The final bill is %.2f\n"), total_bill;
}





















#include <stdio.h>

// Function Prototypes
float calculate_basic_bill(float unit);
float calculate_surcharge(float basic_bill);
float calculate_final_bill(float basic_bill, float surcharge);
void display_bill(float units, float basic_bill, float surcharge, float final_bill);

int main()
{
    float units, basic_bill, surcharge, final_bill;

    printf("Enter your units: ");
    scanf("%f", &units);
    
    // Passing results smoothly down the chain
    basic_bill = calculate_basic_bill(units);
    surcharge = calculate_surcharge(basic_bill);
    final_bill = calculate_final_bill(basic_bill, surcharge);
    
    // Displaying the final compiled values
    display_bill(units, basic_bill, surcharge, final_bill);

    return 0;
}

// 1. Calculates the basic bill based on tiered rates
float calculate_basic_bill(float unit)
{
    if (unit <= 50) 
    {
        return unit * 0.50;
    } 
    else if (unit <= 150) 
    {
        return 25 + ((unit - 50) * 0.75);
    } 
    else if (unit <= 250) 
    {
        return 100 + ((unit - 150) * 1.20);
    } 
    else 
    {
        return 220 + ((unit - 250) * 1.50);
    }
}

// 2. Calculates 20% surcharge based on the basic bill amount
float calculate_surcharge(float basic_bill)
{
    return basic_bill * 0.20;
}

// 3. Merges the basic charges and surcharges
float calculate_final_bill(float basic_bill, float surcharge)
{
    return basic_bill + surcharge;
}

// 4. Receives all calculated data to print neatly
void display_bill(float units, float basic_bill, float surcharge, float final_bill)
{
    printf("\n--- Bill Summary ---\n");
    printf("Total Units Consumed: %.2f\n", units);
    printf("The Basic Bill is:    %.2f\n", basic_bill);
    printf("The Surcharge is:     %.2f\n", surcharge);
    printf("The Final Bill is:    %.2f\n", final_bill);
}
