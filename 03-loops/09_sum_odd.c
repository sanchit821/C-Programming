// Find the sum of all odd numbers from 1 to n.

#include<stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter num: ");
    scanf("%d", &num);

    for ( int i = 1; i <= num; i++)
    {
        if ( i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("Total sum = %d\n", sum);
    return 0;
}

