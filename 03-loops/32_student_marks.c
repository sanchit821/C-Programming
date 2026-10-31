// A student enters marks for an unknown number of subjects. Enter -1 to stop. 
//Display the average and the number of subjects passed (passing mark = 40).

#include<stdio.h>

int main()
{ 
    int marks, Total_marks = 0, count = 0, pass_count = 0;
    float avg = 0;

    while (1)
    {
        printf("Enter marks of subject: ");
        scanf("%d", &marks);

        if( marks == -1)
        {
            break;
        }

        if(marks >= 0)
        {
            count++;
            Total_marks += marks;
        }

        if ( marks >= 40)
        {
            pass_count++;
        }    
    }


    if( count > 0)
    {
        avg = Total_marks / count;
        printf("\n\nTotal number of subject is %d\n", count);
        printf("Average marks are %.2f\n", avg);
        printf("The number of subject passed are %d\n",pass_count);
    }
    return 0;
    

}















#include<stdio.h>

int main()
{ 
    int marks, Total_marks = 0, count = 0, pass_count = 0;
    float avg = 0;

    while (1)
    {
        printf("Enter marks of subject: ");
        scanf("%d", &marks);

        if( marks == -1)
        {
            break;
        }

        // Fix 1: Accept 0 as a valid score too
        if(marks >= 0) 
        {
            count++;
            Total_marks += marks; // Keep addition inside the valid check
        }

        if ( marks >= 40)
        {
            pass_count++;
        }
    }

    if( count > 0)
    {
        // Fix 2: (float) typecasting forces C to keep decimal precision
        avg = (float)Total_marks / count; 

        printf("\n\nTotal number of subjects is %d\n", count);
        printf("Average marks are %.2f\n", avg);
        printf("The number of subjects passed is %d\n", pass_count);
    }
    else 
    {
        printf("\nNo marks were entered.\n");
    }
    
    return 0;
}



