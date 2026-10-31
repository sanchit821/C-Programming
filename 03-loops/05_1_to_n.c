// Print numbers from 1 to n.

#include<stdio.h>
int main()
{
    int num ;
    printf("Enter number num:\n");
    scanf("%d",&num);
    
    for(int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }

    return 0;
    
}