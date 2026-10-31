// Main Concept: Functions + automation logic
// Target Time: 30 min
// Simulate an automatic door system using:

// distance from sensor
// door state

// Functions should determine:

// OPEN
// CLOSE
// KEEP OPEN
// KEEP CLOSED

// Think of it as the logic that could later be transferred to an Arduino.



// #include<stdio.h>

// void automatic( float a, float b);

// int main()
// {
//     float door_close = 0.0, door_open = 90.00;
//     float door_status = 0, distance_from_sensor = 0;

//     printf("Enter door states: ");
//     scanf("%f", &door_status);

//     printf("Enter distance from the door: ");
//     scanf("%f", &distance_from_sensor);

//     automatic(door_status, distance_from_sensor);

//     return 0;
// }

// void automatic(float a, float b)
// {
//     if ( a == 0 && b == 30)
//     {
//         printf("\n\nDoor is open now!\n");
//     }
//     else
//     {
//         printf("\n\nDoor cannot open!, \nDistance should be 30 cm && door should be closed\n");
//     }
    
// }
























#include <stdio.h>

// Door State Definitions (Using standard integer codes like an embedded system)
#define CLOSED 0
#define OPEN   1

void evaluate_door_system(int current_state, float distance);

int main()
{
    int door_state;
    float distance_cm;

    printf("--- Automatic Door Controller Simulation ---\n");
    printf("Enter current door state (0 for CLOSED, 1 for OPEN): ");
    scanf("%d", &door_state);

    // Validate state input
    if (door_state != 0 && door_state != 1) {
        printf("Invalid door state configuration! Terminating.\n");
        return 1;
    }

    printf("Enter sensor distance reading (in cm): ");
    scanf("%f", &distance_cm);

    // Validate distance boundaries
    if (distance_cm < 0.0) {
        printf("Invalid sensor metrics! Distance cannot be negative.\n");
        return 1;
    }

    // Process system automation logic
    evaluate_door_system(door_state, distance_cm);

    return 0;
}

/*
 * Automation Logic Thresholds:
 * - Distance <= 50 cm: Someone is approaching -> Trigger OPEN or KEEP OPEN
 * - Distance > 50 cm: Path is clear -> Trigger CLOSE or KEEP CLOSED
 */
void evaluate_door_system(int current_state, float distance)
{
    printf("\n--- System Action Output ---\n");

    if (distance <= 50.0) 
    {
        // Someone is near the sensor
        if (current_state == CLOSED) {
            printf("Action: OPEN (Activating motor: opening door safely)\n");
        } else {
            printf("Action: KEEP OPEN (Holding position: path is obstructed)\n");
        }
    } 
    else 
    {
        // Path is completely clear
        if (current_state == OPEN) {
            printf("Action: CLOSE (Activating motor: closing door safely)\n");
        } else {
            printf("Action: KEEP CLOSED (Secured position: no activity detected)\n");
        }
    }
}
