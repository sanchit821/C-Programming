// 16. Triangle Type
// Topic: Nested if-else, relational operators, logical operators
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to accept the three sides of a triangle.
// First check whether the sides can form a valid triangle.
// If valid, determine whether it is equilateral,
// isosceles, or scalene.
//
// Example:
// Input:
// Enter three sides: 5 5 8
//
// Expected Output:
// Isosceles triangle.


#include<stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter side1:");
    scanf("%d", &side1);

    printf("Enter side2:");
    scanf("%d", &side2);

    printf("Enter side3:");
    scanf("%d", &side3);

    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) 
    {
        printf("Invalid Triangle: The sum of two sides must be greater than the third side.\n");
    } 
    else if( side1 == side2 && side1 == side3 )
    {
        printf("Equilateral Triangle: All three sides are equal\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("Isosceles Triangle: Two sides are equal\n");
    }
    else{
        printf("Scalene: All three sides are different\n");
    }

    return 0;
    


}