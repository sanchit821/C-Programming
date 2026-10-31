// 11. Copy One Array into Another
// Topic: Array parameters, two arrays, traversal
// Difficulty: Hard
// Time: 15 minutes

// Write a function that copies all elements from a source
// array into a destination array.
// Do not copy the elements directly inside main().
//
// Example:
// Source: 11 22 33 44
//
// Output:
// Destination: 11 22 33 44


#include<stdio.h>

void copieAll(int arr1[], int n);

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter array elements: ");
        scanf("%d", &elements[i]);
    }
    copieAll(elements,size);
    return 0;


        
}

void copieAll(int arr1[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }

    printf("\n");

   
}


// #include<stdio.h>

// // ✅ FIXED: Pass BOTH arrays (source and destination) and the size
// void copieAll(int source[], int dest[], int n);

// int main()
// {
//     int size;

//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     // Create the two arrays based on user input size
//     int source_elements[size];
//     int dest_elements[size]; // ✅ FIXED: Added the destination array

//     for(int i = 0; i < size; i++)
//     {
//         printf("Enter array elements: ");
//         scanf("%d", &source_elements[i]);
//     }

//     // Pass both arrays into your copy function
//     copieAll(source_elements, dest_elements, size);

//     // ✅ FIXED: Display the destination array elements here in main to prove it worked!
//     printf("Destination: ");
//     for(int i = 0; i < size; i++)
//     {
//         printf("%d ", dest_elements[i]);
//     }
//     printf("\n");

//     return 0;
// }

// // Function implementation
// void copieAll(int source[], int dest[], int n)
// {
//     // ✅ FIXED: Start at index 0 and stop before 'n' to avoid memory errors
//     for(int i = 0; i < n; i++)
//     {
//         // Copy the element from the source array into the destination array
//         dest[i] = source[i];
//     }
// }
