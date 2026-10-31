// Ask the user to enter a positive number. If they enter 0 or a negative number, keep asking until the input is valid.

#include<stdio.h>

int main()
{
    int num;

    

    do
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num <= 0)
        {
            printf("Invaild number, try again.\n");
        }

    } while ( num <= 0);

    printf("%d is positive number.\n", num);
    return 0;
    
}



