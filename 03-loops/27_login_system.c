// Create a simple login system with username and password. Allow a maximum of 3 login attempts.

#include<stdio.h>

int main()
{
    char username[15] = "sanchit", Username[15];
    int passward = '1112' ,  max = 3, Passward;
    

    for(int i = 1; i <= max; i++ )
    {
        printf("Username: ");
        scanf("%s", &Username);

        printf("Passward: ");
        scanf("%d", &Passward);

        if( Username == username && Passward == passward)
        {
            printf("\n\nLogin successfully\n\n");
        }
        else
        {
            printf("\n\nTry again\n\n");
        }
    }
    return 0;
}








#include <stdio.h>
#include <string.h> // Required for strcmp()

int main()
{
    // Correct credentials
    char correct_user[] = "sanchit";
    int correct_pass = 1112;
    
    // Variables to store what the user types
    char input_user[15];
    int input_pass;
    
    int max_attempts = 3;
    int login_success = 0; // Tracks if they got in (0 = No, 1 = Yes)

    // Changed <= to < so it loops exactly 3 times (0, 1, 2)
    for (int i = 0; i < max_attempts; i++)
    {
        printf("\n--- Login Attempt %d of %d ---\n", i + 1, max_attempts);
        
        printf("Username: ");
        scanf("%s", input_user); // %s reads text string. Notice NO '&' sign

        printf("Password: ");
        scanf("%d", &input_pass); // %d reads integer. Needs '&' sign

        // VERIFICATION LOGIC: Check if username AND password match
        if (strcmp(input_user, correct_user) == 0 && input_pass == correct_pass)
        {
            printf("\nAccess Granted! Welcome back, %s.\n", correct_user);
            login_success = 1; // Mark success
            break;             // Exit the loop immediately
        }
        else
        {
            printf("Invalid credentials. Try again.\n");
        }
    }

    // If the loop finished and they never got in
    if (login_success == 0)
    {
        printf("\nAccess Denied! You have been locked out.\n");
    }

    return 0;
}
