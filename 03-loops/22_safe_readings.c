// Take 10 sensor readings and count how many are within the safe range of 20–30.


#include<stdio.h>

int main()
{
    int temp, count = 0;

    for( int i = 1; i <= 10; i++)
    {
        printf("Enter reading %d: ", i);
        scanf("%d", &temp);

        if( temp >= 20 && temp <= 30)
        {
            count += 1;
        }

    }

    

    printf("Reading within the safe range of 20 to 30 are: %d\n", count);
    return 0;
}