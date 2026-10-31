// 12. Replace Negative Values
// Topic: Array modification through functions
// Difficulty: Hard
// Time: 15 minutes


// Write a function that replaces every negative element
// with zero. Modify the original array.
//
// Example:
// Array: 10 -5 20 -8 30
//
// Output:
// 10 0 20 0 30


#include<stdio.h>

void replace(int arr[], int n);

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int elements[size];
    
    for(int i = 0; i < size; i++)
    {
        printf("Enter your elements: ");
        scanf("%d", &elements[i]);
    }

    replace(elements, size);
    return 0;

}

void replace(int arr[], int n)
{
    for( int i = 0; i < n; i++)
    {
        if( arr[i] < 0)
        {
            arr[i] *= 0;
        }

        printf("%d\t", arr[i]);
    }
    printf("\n");

}

//other type
#include<stdio.h>

void replace(int arr[], int n);

int main()
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int elements[size];
    
    for(int i = 0; i < size; i++)
    {
        printf("Enter your elements: ");
        scanf("%d", &elements[i]);
    }

    // Modifies array in place
    replace(elements, size);

    // ✅ FIXED: Separate loop for output presentation in main()
    printf("Output:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", elements[i]);
    }
    printf("\n");

    return 0;
}

void replace(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = 0; // ✅ Cleaner: Direct assignment over multiplication
        }
    }
}
