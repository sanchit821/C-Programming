// Create a menu for a calculator: Add, Subtract, Multiply, Divide, Exit. Keep displaying the menu until Exit is selected.

#include<stdio.h>

int main()
{
    int add, sub, div, multi, num1, num2;
    int choice;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);



    do {
        printf("\n\n---------calculator menu-----------\n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Division\n");
        printf("4. Multiplication\n");
        printf("5. Exit\n\n");

        printf("ENter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add = num1 + num2;
            printf("Addition of %d and %d is %d \n", num1, num2, add);
            break;
        
        case 2:
            sub = num1 - num2;
            printf("ssubtration of %d and %d is %d \n", num1, num2, sub);
            break;
            
        case 3:
            div = num1 / num2;
            printf("division of %d and %d is %d \n", num1, num2, div);
            break;
        
        case 4:
            multi = num1 * num2;
            printf("Multiplication of %d and %d is %d \n", num1, num2, multi);
            break;
           
        case 5:
           
            printf("Thank you for using the Calculator\n");
            break;

        default:
            printf("choice is invalid choose btw 1 to 5\n");
            break;
        }
    } while (choice != 5);

    return 0;
    


}