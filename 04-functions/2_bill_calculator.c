// Main Concept: Functions + calculations
// Target Time: 20 min
// Create a small electricity-bill calculator. Take units consumed and calculate the bill using 
// different slab rates. Create a function that calculates the charge for each slab.


#include <stdio.h>

void rate1(int units);
void rate2(int units);
void rate3(int units);
void rate4(int units);


int main()
{
    int value, count = 0;

    printf("\n\nEnter your units: ");
    scanf("%d", &value);

    if(value == 0 || value < 0)
    {
        printf("Wrong input!\n");
    }

    for( int i = 1; i <= value - 1; i++)
    {
        count++;
    }

    if( count > 0 && count < 100)
    {
        rate1(value);
    }
    else if ( count > 100 && count < 200)
    {
        rate2(value);
    }
    else if (count > 200 && count < 300)
    {
        rate3(value);
    }
    else if (count > 300 && count < 400)
    {
        rate4(value);
    }
    else
    {
        printf("Thank you\n");
    }


    return 0;
}


void rate1(int units)
{
    int Rate1 = units * 10;
    printf("The use of %d units costed you %drs\n", units,Rate1);
}


void rate2(int units)
{
    int Rate2 = units * 20;
    printf("The use of %d units costed you %drs\n", units,Rate2);
}


void rate3(int units)
{
    int Rate3 = units * 30;
    printf("The use of %d units costed you %drs\n", units,Rate3);
}


void rate4(int units)
{
    int Rate4 = units * 40;
    printf("The use of %d units costed you %drs\n", units,Rate4);
}





















#include <stdio.h>

// Functions now return the calculated amount for cleaner logic
int calculate_slab(int units, int rate);

int main()
{
    int units;
    int total_bill = 0;

    printf("Enter your units: ");
    if (scanf("%d", &units) != 1 || units < 0) 
    {
        printf("Wrong input!\n");
        return 1;
    }

    int remaining_units = units;

    // Slab 1: First 100 units @ 10rs
    if (remaining_units > 0) {
        int consumed = (remaining_units > 100) ? 100 : remaining_units;
        total_bill += calculate_slab(consumed, 10);
        remaining_units -= consumed;
    }

    // Slab 2: Next 100 units (101-200) @ 20rs
    if (remaining_units > 0) {
        int consumed = (remaining_units > 100) ? 100 : remaining_units;
        total_bill += calculate_slab(consumed, 20);
        remaining_units -= consumed;
    }

    // Slab 3: Next 100 units (201-300) @ 30rs
    if (remaining_units > 0) {
        int consumed = (remaining_units > 100) ? 100 : remaining_units;
        total_bill += calculate_slab(consumed, 30);
        remaining_units -= consumed;
    }

    // Slab 4: Above 300 units @ 40rs
    if (remaining_units > 0) {
        total_bill += calculate_slab(remaining_units, 40);
    }

    printf("\nTotal bill for %d units is: %d rs\n", units, total_bill);
    return 0;
}

int calculate_slab(int units, int rate)
{
    int cost = units * rate;
    printf("-> %d units calculated at %d rs/unit = %d rs\n", units, rate, cost);
    return cost;
}
