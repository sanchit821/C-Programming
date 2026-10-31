// Main Concept: Functions + real-world logic
// Target Time: 25 min
// A device reports battery percentage. Create functions to determine:
// Battery status
// Whether charging is required


#include<stdio.h>

void calculatestatus(float percentage);
void requiredcharging(float percentage);


int main()
{
    float Battery_percentage;

    printf("Enter your phone's battery status.\n");
    scanf("%f", &Battery_percentage);

    if (Battery_percentage < 0.0 || Battery_percentage > 100.0)
    {
        printf("Error: Invalid battery percentage! Must be between 0 and 100.\n");
        return 1; 
    }

    calculatestatus(Battery_percentage);
    requiredcharging(Battery_percentage);
}

void calculatestatus(float percentage)
{
    
    if( percentage >= 95)
    {
        printf("Battery status is normal\n");
    }
    else if (percentage >= 60 && percentage <= 95)
    {
        printf("Battery status is not so good, be careful\n");
    }
    else
    {
        printf("Warning for user, Change your battery or phone!\n");
    }
}

void requiredcharging(float percentage)
{
  
    if( percentage >= 95 )
    {
        printf("Do not need to charge phone!\n");
    }
    else if ( percentage>= 60 && percentage <= 95)
    {
        printf("Charge your phone if possible!\n");
    }
    else
    {
        printf("Go and charge your phone now!\n");   
    }  

}















#include<stdio.h>

// Both functions accept the same single battery percentage value
void calculatestatus(float percentage);
void requiredcharging(float percentage);

int main()
{
    float battery_percentage;

    // Ask for the battery percentage exactly ONCE
    printf("Enter your phone's battery percentage (0 to 100): ");
    scanf("%f", &battery_percentage);

    // FIXED: Strict boundary validation right at the start of main()
    if(battery_percentage < 0.0 || battery_percentage > 100.0)
    {
        printf("Invalid input! Battery percentage must be between 0 and 100.\n");
        return 1; // Ends the program early so functions aren't called with bad data
    }

    // Pass the exact same percentage to both analytical functions
    calculatestatus(battery_percentage);
    requiredcharging(battery_percentage);

    return 0;
}

void calculatestatus(float percentage)
{
    if(percentage >= 95.0)
    {
        printf("Battery Status: Excellent/Full.\n");
    }
    else if (percentage >= 60.0 && percentage < 95.0) // Small adjustment: < 95 since 95 is caught above
    {
        printf("Battery Status: Good.\n");
    }
    else
    {
        printf("Battery Status: Low! Health might decline if kept low.\n");
    }
}

void requiredcharging(float percentage)
{
    if(percentage >= 95.0)
    {
        printf("Charging advice: Unplug your phone! Do not need to charge.\n");
    }
    else if (percentage >= 60.0 && percentage < 95.0)
    {
        printf("Charging advice: Optional. Charge your phone if possible.\n");
    }
    else
    {
        printf("Charging advice: Critical! Go and charge your phone now!\n");   
    }  
}
