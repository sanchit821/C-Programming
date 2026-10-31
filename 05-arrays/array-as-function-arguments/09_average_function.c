// 9. Calculate the Average
// Topic: Arrays in functions, sum, average
// Difficulty: Moderate
// Time: 15 minutes
// File: 9_average_function.c
// Write a function named calculateAverage() that returns
// the average of all array elements as a float.
//
// Example:
// Array: 10 20 30 40
//
// Output:
// Average = 25.00


#include<stdio.h>

void calculateAverage(float arr[],int n);

int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    float elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter your element: ");
        scanf("%f", &elements[i]);
    }

    calculateAverage(elements,size);
    return 0;
}


void calculateAverage(float arr[],int n)
{
    float avg = 0, total = 0;

    for(int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    avg = total / n;

    printf("Average = %f\n", avg);
}