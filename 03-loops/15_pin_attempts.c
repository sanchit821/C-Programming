// Ask the user for a PIN. Give them a maximum of 3 attempts. Display whether access is granted or denied.

#include <stdio.h>

int main() {
    int pin;
    int correct_pin = 1234; // Set your secret PIN here
    int max_attempts = 3;
    int authenticated = 0;  // Flag to track if login succeeded

    for (int attempt = 1; attempt <= max_attempts; attempt++) {
        printf("Enter your PIN (Attempt %d/%d): ", attempt, max_attempts);
        scanf("%d", &pin);

        if (pin == correct_pin) {
            authenticated = 1; // Mark as successful
            break;             // Stop asking and exit the loop immediately
        } else {
            printf("Incorrect PIN.\n\n");
        }
    }

    // Check the final status after the loop ends
    if (authenticated) {
        printf("Access Granted! Welcome back.\n");
    } else {
        printf("Access Denied! Your account is locked.\n");
    }

    return 0;
}
