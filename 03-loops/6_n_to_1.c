// Print numbers from n to 1.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter num:\n");
    scanf("%d", &num);

    for ( int i = num; i >= 1; i-- )
    {
        printf("%d\n", i);
    }

    return 0;
}