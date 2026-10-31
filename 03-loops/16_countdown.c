// Display a countdown from 10 to 1 and then print START!.

#include<stdio.h>

int main()
{
    for ( int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    printf("START!.\n");

    return 0;
}