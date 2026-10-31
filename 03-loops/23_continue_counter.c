// Create a program that repeatedly asks whether the user wants to continue: 1 = Yes, 0 = No. Count how many times they chose Yes.

#include<stdio.h>

int main()
{
    int num, count = 0;

    while( num != 0 )
    {
        printf("Enter 1(YES) to continue and 0(NO) to not continue any more.\n");
        scanf("%d", &num);

        if( num == 1)
        {
            count += 1;
        }
    }
    printf("User said yes %d times.\n",count);
    return 0;


}