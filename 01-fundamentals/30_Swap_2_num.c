// 30. Swap Two Numbers
// Topic: Pointers, address operator (&), dereference operator (*)
// Difficulty: Moderate
// Time: 12 minutes

// Problem Statement:
// Write a C program to swap two integer variables
// using pointers. Pass the addresses of the variables
// to a function and exchange their values.
//
// Example:
// Input:
// First number: 10
// Second number: 20
//
// Output:
// Before swapping: 10 20
// After swapping: 20 10

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter first number:");
    scanf("%d",&a);

    printf("Enter second number:");
    scanf("%d",&b);

    printf("Before swap\n");
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
    
    c = b;
    b = a;
    a = c;

    printf("After swap\n");
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);

    return 0;

}




// #include <stdio.h>

// void swap(int a, int b);

// int main()
// {
//     int a = 5, b = 10;

//     printf("Before swap\n");
//     printf("Value of a = %d\n", a);
//     printf("Value of b = %d\n", b);

//     swap(a, b);

//     return 0;
// }

// void swap(int a, int b)
// {
//     int c;

//     c = b;
//     b = a;
//     a = c;

//     printf("\nAfter swap\n");
//     printf("Value of a = %d\n", a);
//     printf("Value of b = %d\n", b);
// }






#include<stdio.h>

void swap (int a, int b); 
void _swap(int *a, int *b);

int main () 
{
    int x = 3, y = 5;
    swap(x,y);
    _swap (&x, &y) ;
    printf("x = %d & y = %d\n", x, y); 
    return 0;
}


//call by reference
void _swap (int *a, int *b) 
{
    int t = *a;
    *a = *b;
    *b = t;
}
// call by value
void swap (int a, int b)
{ 
    int t = a;
    a = b;
    b = t;
    printf ("a = %d & b = %d\n", a, b);
}


