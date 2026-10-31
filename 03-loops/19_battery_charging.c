// Simulate battery charging. Start at 0% and increase the battery by 10% until it reaches 100%. Display every stage.


#include<stdio.h>

int main()
{
    int charging, stage;

    for( charging = 0, stage = 0; charging <= 100; charging += 10, stage++)
    {
        printf("Battery charging in stage %d: %d%%\n", stage, charging);
    }

    return 0;


}


