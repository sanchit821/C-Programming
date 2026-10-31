// Print the multiplication table of a given number.

#include<stdio.h>

int main()
{
    int num = 5, table;

    for ( int i = 1; i <= 10; i++)
    {
        table = 5 * i;
        printf("%d\n", table);
    }

    return 0;
}