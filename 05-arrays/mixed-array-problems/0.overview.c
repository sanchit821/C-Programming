// ## Module 8
// - Arrays

// Questions
// - 30



// Apan College

//Write a program to enter price of 3 items & print their final cost with gst.

// #include<stdio.h>

// int main()
// {
//     float items[3] = {0};

//     printf("Enter 3 item price: ");
//     scanf("%f", &items[0]);
//     scanf("%f", &items[1]);
//     scanf("%f", &items[2]);

//     printf("Total price of 1 item with gst is: %f\n", items[0] + (0.18 * items[0]));
//     printf("Total price of 2 item with gst is: %f\n", items[1] + (0.18 * items[1]));
//     printf("Total price of 3 item with gst is: %f\n", items[2] + (0.18 * items[2]));
//     return 0;
// }



// increment & decrement operator 

//case 1
// #include<stdio.h>

// int main()
// {
//     int age = 19;
//     int *ptr = &age;

//     printf("Ptr = %u\n", ptr);
//     ptr++;
//     printf("Ptr = %u\n", ptr);
//     ptr--;
//     printf("Ptr = %u\n", ptr);

//     return 0;

// }

//case2
// #include<stdio.h>

// int main()
// {
//     float price = 100.0;
//     float *ptr = &price;

//     printf("Ptr = %u\n", ptr);
//     ptr++;
//     printf("Ptr = %u\n", ptr);
//     ptr--;
//     printf("Ptr = %u\n", ptr);

//     return 0;

// }

//case3
// #include<stdio.h>

// int main()
// {
//     char star = '*';
//     char *ptr = &star;

//     printf("Ptr = %u\n", ptr);
//     ptr++;
//     printf("Ptr = %u\n", ptr);
//     ptr--;
//     printf("Ptr = %u\n", ptr);

//     return 0;

// }



//Pointer arithmetic

// #include<stdio.h>

// int main()
// {
//     int age = 19;
//     int _age = 19;
//     int *ptr = &age;
//     int *_ptr = &_age;

//     printf( "%u, %udifference = %u\n", ptr, _ptr, ptr-_ptr) ;
//     _ptr = &age;
//     printf(("comparison = %u\n", ptr == _ptr));
//     return 0;  
// }




// Array is a Pointer
// int *ptr = &arr[O];
// int *ptr = arr;
//arrays first index in pointer bcz it points to first elements of array 



// Traverse an Array int aadhar[10];
// int *ptr = &aadhar[O];