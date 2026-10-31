// Main Concept: Function design + conditional logic
// Target Time: 20 min
// Imagine a temperature sensor gives a value in °C. Create functions that determine whether the system status is:
// NORMAL
// WARNING
// CRITICAL

// Choose reasonable temperature thresholds yourself and explain your choice in a comment.


#include<stdio.h>

void determine(float temp);

int main()
{
    float tempC;

    printf("Enter temperature: ");
    scanf("%f", &tempC);

    if(tempC < 0)
    {
        return 1;
    }

    determine(tempC);
    return 0;
}

void determine(float temp)
{
    if( temp <= 25)
    {
        printf("NORMAL\n");
    }
    else if (temp >= 25 && temp < 75)
    {
        printf("WARNING\n");
    }
    else
    {
        printf("CRITICAL\n");
    }
    
}















#include<stdio.h>

void determine(float temp);

int main()
{
    float tempC;

    printf("Enter temperature in °C: ");
    scanf("%f", &tempC);

    
    if(tempC < 0)
    {
        printf("Wrong input! Temperature cannot be below absolute zero bounds for this system.\n");
        return 1; 
    }

    determine(tempC);
    return 0;
}

void determine(float temp)
{
    if(temp <= 25.0)
    {
        printf("System Status: NORMAL\n");
    }
    else if (temp > 25.0 && temp <= 75.0) 
    {
        printf("System Status: WARNING\n");
    }
    else
    {
        printf("System Status: CRITICAL\n");
    }
}
