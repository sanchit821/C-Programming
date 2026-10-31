// 6. Count Even and Odd Elements
// Topic: Array parameters, conditions, multiple counters
// Difficulty: Moderate
// Time: 12 minutes

// Write a function that counts even and odd elements.
// Pass the array and size to the function.
// Display both counts.
//
// Example:
// Array: 3 8 12 7 5 10
//
// Output:
// Even = 3
// Odd = 3


// error 
// #include<stdio.h>

// int countElements(int arr[], int n);

// int main()
// {
//     int size;
//     int elements[size];

//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     for(int i = 0; i < size; i++)
//     {
//         printf("Enter your array element: ");
//         scanf("%d", &elements[i]);
//     }

//     countElements(elements, size);



//     return 0;
// }


// int countElements(int arr[], int n)
// {
//     int countEven = 0, countOdd = 0;

//     for(int i = 0; i < n; i++)
//     {
//         if( i % 2 == 0 )
//         {
//             countEven++;
//         }
//         else
//         {
//             countOdd++;
//         }
//     }

//     printf("Even count = %d\n", countEven);
//     printf("Odd count = %d\n", countOdd);

//     return 0;
// }




// right

#include<stdio.h>

// ✅ FIXED: Changed return type to 'void' since it prints directly inside
void countElements(int arr[], int n);

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    // ✅ FIXED: Declare the array ONLY AFTER 'size' gets its value from scanf
    int elements[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter your array element: ");
        scanf("%d", &elements[i]);
    }

    countElements(elements, size);

    return 0;
}

// ✅ FIXED: Changed to void
void countElements(int arr[], int n)
{
    int countEven = 0, countOdd = 0;

    for(int i = 0; i < n; i++)
    {
        // ✅ FIXED: Check 'arr[i]' (the actual number) instead of 'i' (the index)
        if( arr[i] % 2 == 0 )
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }

    printf("Even = %d\n", countEven);
    printf("Odd = %d\n", countOdd);
} 
