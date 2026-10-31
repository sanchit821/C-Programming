// Create a program that asks the user for a password. Keep asking until the correct password is entered.


#include<stdio.h>

int main()
{
    int key_pass = 1112, passward;

    printf("Enter your passward: ");
    scanf("%d", &passward);

    do 
    {
        printf("Enter your passward: ");
        scanf("%d", &passward);

        if ( passward != key_pass)
        {
            printf("Wrong passward, PLeace try again\n");
        }
        
        
    }
    while ( passward != key_pass);
    printf("Login successfully!\n"); 
    return 0;

}