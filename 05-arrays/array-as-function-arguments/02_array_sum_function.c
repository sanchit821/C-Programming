// 2. Calculate the Sum Using a Function
// Topic: Array parameter, return value
// Difficulty: Basic
// Time: 10 minutes

// Write a function named calculateSum() that receives
// an array and its size and returns the sum of its elements.
//
// Example:
// Array: 5 10 15 20
//
// Output:
// Sum = 50


#include<stdio.h>

void calculatesum(int sum[], int n);

int main()
{
    int elements[5] = {};
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter your element: ");
        scanf("%d", &elements[i]);
    }
    calculatesum(elements,5);
    return 0;
}



void calculatesum(int sum[], int n)
{
    int Sum = 0;
    for(int i = 0; i < 5; i++)
    {
        Sum += sum[i];
    }
    printf("Sum = %d\n", Sum);
}

