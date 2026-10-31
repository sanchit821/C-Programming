// Main Concept: Functions + electronics application
// Target Time: 20 min
// Create functions to calculate the equivalent resistance of:
// Two resistors in series
// Two resistors in parallel
// Let the user choose the configuration.



#include<stdio.h>

void series(float a, float b);
void parallel(float a, float b);

int main()
{
    int choice;
    float resistance1, resistance2;

    do
    {

        printf("\n\n---------- calculator ----------\n\n");

        printf("1. Two resistors in series\n");
        printf("2. Two resistors in parallel\n");
        printf("3. Exit\n");


        printf("If you want to calculate equivalent resistance of \n2 series resistors then Enter 1 \n or \nEnter 2 to calculate equivalent resistance: ");
        scanf("%d", &choice);


        switch (choice)
        {
        case 1:
            printf("Enter value of your First Resistor: ");
            scanf("%f %f", &resistance1, &resistance2);
            series(resistance1, resistance2);
            
            break;
        
        case 2:
            printf("Enter value of your First Resistor: ");
            scanf("%f %f", &resistance1, &resistance2);
            parallel(resistance1, resistance2);
            break;   

        case 3:
            printf("Thank you for using the Calculater.\n");    
            break;

        default:
            printf("Enter choice btw (1 to 3\n)");
            break;
        }
        

    }while (choice != 3);
    
}


void series(float a, float b)
{
    float value_series = a + b;
    printf("Equivalent resistance of two parallel series resistors is %.2f ohm\n", value_series);
}

void parallel(float a, float b)
{

    if ((a + b) == 0) 
    {
        printf("Error: Cannot divide by zero!\n");
    } 
    else
    {
        // Added parentheses () around (a + b) so addition happens first
        float value_parallel = (a * b) / (a + b);
        printf("Equivalent resistance of two parallel resistors is %.2f ohm\n", value_parallel);
    }
}





























