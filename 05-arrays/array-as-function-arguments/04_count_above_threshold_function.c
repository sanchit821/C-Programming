// 4. Count Values Above a Threshold
// Topic: Array parameters, conditions, counting
// Difficulty: Basic
// Time: 12 minutes

// Write a function named countAbove() that receives an
// array, its size, and a threshold. Return the number
// of elements greater than the threshold.
//
// Example:
// Array: 10 40 25 60 15
// Threshold: 30
//
// Output:
// Count = 2


#include<stdio.h>

void countAbove(int arr[], int n, int threshold);

int main()
{
    int elements[5] = {};
    for(int i = 0; i < 5; i++)
    {
        printf("Enter your element: ");
        scanf("%d", &elements[i]);
    }

    countAbove(elements,5,30);
    return 0;

}

void countAbove(int arr[], int n, int threshold)
{
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] > threshold)
        {
            count++;
        }
    }

    printf("Count = %d\n", count);
}






// right way to right wrongs this follows in all program 

// #include <stdio.h>

// // Function prototype: Takes the array, its dynamic size, and the threshold
// int countAbove(int arr[], int n, int threshold);

// int main()
// {
//     int size;
//     int threshold;

//     // 1. Let the user decide the size of the array
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     // 2. Declare the array using the size provided by the user
//     int elements[size];

//     // 3. Get the elements from the user
//     for(int i = 0; i < size; i++)
//     {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &elements[i]);
//     }

//     // 4. Let the user choose the threshold value
//     printf("Enter the threshold value: ");
//     scanf("%d", &threshold);

//     // 5. Pass the array, the user's custom size, and the threshold to the function
//     int result = countAbove(elements, size, threshold);

//     // 6. Display the final count
//     printf("Count = %d\n", result);

//     return 0;
// }

// // Function implementation
// int countAbove(int arr[], int n, int threshold)
// {
//     int count = 0;

//     // Loops up to 'n' (the user-defined size)
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] > threshold)
//         {
//             count++;
//         }
//     }

//     return count; 
// }
