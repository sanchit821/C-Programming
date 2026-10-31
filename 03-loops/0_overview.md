<!-- 
## Module 6
- for
- while
- do while

Questions
- 30 -->


// incrementer and dectrement operator 

#include<stdio.h>

int main()
{
    // increment operator 
    // ++1  (pre increment)
    // 1++  (Post increment)



    // int i = 1;
    // printf("%d \n", i++); // use, then increase
    // printf("%d\n", i);

    // printf("%d \n", ++i); // increase, then use
    // printf("%d\n", i);


    
    // // decrement operator 
    // // --1  (pre decrement)
    // // 1--  (Post decrement)

    // printf("%d \n", i--); // use, then decrement
    // printf("%d\n", i);


    // printf("%d \n", --i); // decrease, then use
    // printf("%d\n", i);



    for( float i = 1.0; i <= 5.0; i++)
    {
        printf("%f\n", i);
    }


    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }
    return 0;


}


