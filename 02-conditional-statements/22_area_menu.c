// 22. Area Menu
// Topic: switch-case, menu-driven programming, arithmetic formulas
// Difficulty: Moderate
// Time: 15 minutes

// Problem Statement:
// Write a C program to create a menu that allows the user
// to calculate the area of different geometric shapes,
// such as a circle, rectangle, and triangle.
// Use a switch statement to select the shape.
//
// Example:
// Input:
// 1. Circle
// 2. Rectangle
// 3. Triangle
//
// Enter choice: 1
// Enter radius: 5
//
// Expected Output:
// Area of circle = 78.50


// #include<stdio.h>

// int main()
// {
//     int choice;
//     float  radius, length, width, base, hight, Area ;



//     do {

//         printf("\n*** calculator ***\n");
//         printf("1. TO find Area of circle\n");
//         printf("2. To find Area of rectangle\n");
//         printf("3. To find Area of Triangle\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);


//         switch (choice)
//         {
//         case 1:
//             printf("Enter radius:");
//             scanf("%f", &radius);
//             Area = 3.14 * radius * radius;
//             printf("Area of circle is %f\n", Area);
//             break;
//         case 2:
//             printf("Enter length:");
//             scanf("%f", &length);

//             printf("Enter width:");
//             scanf("%f", &width);
//             Area = length * width;
//             printf("Area of rectangle is %f\n", Area);
//         case 3:
//             printf("Enter hight:");
//             scanf("%f", &hight);

//             printf("Enetr base:");
//             scanf("%f",&base );
//             Area = 1/2 * base * hight;
//             printf("Area of Triangle is %f\n", Area);
//         case 4:
//             printf("Thank you for using the Calculator.\n");
//             break;    

//         default:
//             printf("Invalid choice. Please try again.\n");
//             break;
//         }
//     }while (choice != 4);

//     return 0;
   
    
    




// }







// Create a menu to calculate area of circle, rectangle, or triangle

#include<stdio.h>

#define PI 3.14159 // More accurate value for Pi

int main()
{
    int choice;
    float radius, length, width, base, height, Area;

    do {
        printf("\n*** Calculator ***\n");
        printf("1. To find Area of circle\n");
        printf("2. To find Area of rectangle\n");
        printf("3. To find Area of Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            Area = PI * radius * radius;
            printf("Area of circle is %.2f\n", Area); // %.2f limits output to 2 decimal places
            break;
            
        case 2:
            printf("Enter length: ");
            scanf("%f", &length);
            printf("Enter width: ");
            scanf("%f", &width);
            Area = length * width;
            printf("Area of rectangle is %.2f\n", Area);
            break; // Added missing break

        case 3:
            printf("Enter height: ");
            scanf("%f", &height);
            printf("Enter base: ");
            scanf("%f", &base);
            Area = 0.5 * base * height; // Fixed integer division bug (1/2 -> 0.5)
            printf("Area of Triangle is %.2f\n", Area);
            break; // Added missing break
            
        case 4:
            printf("Thank you for using the Calculator.\n");
            break;    

        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
