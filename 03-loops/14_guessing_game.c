// Create a simple number-guessing game. Keep asking the user to guess a fixed secret number until they guess correctly.

#include<stdio.h>

int main()
{
    int num, count = 0;
    int fixed_num = 69;

    do 
    {
        printf("Guess the number until you find the correct one: ");
        scanf("%d", &num);
        count += 1;

    } while( num != fixed_num);

    printf("%d is coreect guess, at %d attempt\n", num, count);

    return 0;
}