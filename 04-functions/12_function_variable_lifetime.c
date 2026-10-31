// Main Concept: Scope + local variables
// Target Time: 20 min
// Create two functions using local variables with the same variable name. 
// Demonstrate that changing the variable in one function does not affect the variable in the other.


#include<stdio.h>

void variable1(void);
void variable2(void);

int main()
{
    variable1();
    variable2();

    return 0;
}

void variable1(void)
{
    int a = 50;
    printf("Print (Before changing)in function one, a = %d\n", a);

    a += 5;
    printf("Print (After changing)in function one, a = %d\n", a);
}

void variable2(void)
{
    int a = 500;
    printf("Print (unaffected) in function one, a = %d\n", a);
}

