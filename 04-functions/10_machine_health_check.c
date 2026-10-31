// Main Concept: Multiple functions + problem decomposition
// Target Time: 30 min
// A machine provides three readings:
// temperature
// vibration
// voltage

// Create separate functions to check each reading and then produce an overall machine status:
// SAFE
// WARNING
// SHUTDOWN REQUIREDf



#include<stdio.h>

void temperature(float reading1);
void vibration(float reading2);
void voltage(float v);

int main()
{
    float value1, value2, value3;

    printf("Enter temperature, Vibration, voltage: ");
    scanf("%f %f %f", &value1, &value2, &value3);

    temperature(value1);
    vibration(value2);
    voltage(value3);

}

void temperature(float reading1)
{
    if( reading1 <= 50)
    {
        printf("Temperature is safe\n");
    }
    else if (reading1 <= 100)
    {
        printf("Temperature warning\n");
    }
    else
    {
        printf("Shutdown Required due to over temperature\n");
    }
}

void vibration(float reading2)
{
    if( reading2 <= 50)
    {
        printf("Vibration is safe\n");
    }
    else if (reading2 <= 100)
    {
        printf("Vibration warning\n");
    }
    else
    {
        printf("Shutdown Required duw to over vibrations\n");
    }
}

void voltage( float v)
{
    if( v <= 50)
    {
        printf("Temperature is safe\n");
    }
    else if (v <= 100)
    {
        printf("Temperature warning\n");
    }
    else
    {
        printf("Shutdown Required due to over voltage\n");
    }
}
























#include<stdio.h>

// Functions now return an integer status code: 0 = SAFE, 1 = WARNING, 2 = SHUTDOWN
int check_temperature(float temp);
int check_vibration(float vib);
int check_voltage(float volt);

int main()
{
    float temp_val, vib_val, volt_val;
    int status_temp, status_vib, status_volt, overall_status;

    printf("Enter machine metrics (Temperature Vibration Voltage): ");
    scanf("%f %f %f", &temp_val, &vib_val, &volt_val);

    // Call functions and harvest their return values
    status_temp = check_temperature(temp_val);
    status_vib = check_vibration(vib_val);
    status_volt = check_voltage(volt_val);

    // Find the worst-case status among all three readings
    overall_status = status_temp;
    if (status_vib > overall_status) overall_status = status_vib;
    if (status_volt > overall_status) overall_status = status_volt;

    // Produce the requested Overall Machine Status
    printf("\n--- OVERALL MACHINE STATUS ---\n");
    if (overall_status == 2)
    {
        printf("STATUS: SHUTDOWN REQUIRED!\n");
    }
    else if (overall_status == 1)
    {
        printf("STATUS: WARNING\n");
    }
    else
    {
        printf("STATUS: SAFE\n");
    }

    return 0;
}

int check_temperature(float temp)
{
    if(temp <= 50.0) {
        return 0; // Safe
    } else if (temp <= 100.0) {
        printf("[Log] Temperature warning noticed.\n");
        return 1; // Warning
    } else {
        printf("[Log] Critical over-temperature detected!\n");
        return 2; // Shutdown
    }
}

int check_vibration(float vib)
{
    if(vib <= 50.0) {
        return 0; 
    } else if (vib <= 100.0) {
        printf("[Log] Vibration warning noticed.\n");
        return 1; 
    } else {
        printf("[Log] Critical over-vibration detected!\n");
        return 2; 
    }
}

int check_voltage(float volt)
{
    if(volt <= 50.0) {
        return 0; 
    } else if (volt <= 100.0) {
        printf("[Log] Voltage warning noticed.\n"); // Fixed text output
        return 1; 
    } else {
        printf("[Log] Critical over-voltage detected!\n"); // Fixed text output
        return 2; 
    }
}
