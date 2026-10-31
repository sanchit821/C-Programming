// Create a program that accepts temperatures continuously. Stop when the user enters 999. Count how many temperatures were above 35°C.

#include<stdio.h>

int main()
{
    int temp, count = 0;
    while (temp != 999)
    {
        printf("Enter temperature & Enter 999 to stop: ");
        scanf("%d", &temp);

        if( temp > 35 && temp != 999)
        {
            count += 1;
        }
    }

    printf("There are total %d temperature greater than 35\n", count);
    return 0;
    
}








#include <stdio.h>

int main() {
    int temp;
    int count = 0;

    do {
        printf("Enter temperature (Enter 999 to stop): ");
        scanf("%d", &temp);

        // Count only if temperature is above 35 and not the stop code
        if (temp > 35 && temp != 999) {
            count++;
        }
    } while (temp != 999);

    printf("There are a total of %d temperatures greater than 35.\n", count);
    
    return 0;
}
