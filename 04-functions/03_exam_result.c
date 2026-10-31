// Main Concept: Multiple functions + return values
// Target Time: 20 min
// Take marks for 5 subjects. Create functions to calculate total, percentage, grade, 
// and pass/fail status. main() should coordinate the functions rather than perform the calculations itself.



#include<stdio.h>

void calculate(int a, int b, int c, int d, int e);



int main()
{
    int sub1, sub2, sub3, sub4, sub5;

    printf("Enter marks: ");
    scanf("%d", &sub1);

    printf("Enter marks: ");
    scanf("%d", &sub2);

    printf("Enter marks: ");
    scanf("%d", &sub3);

    printf("Enter marks: ");
    scanf("%d", &sub4);

    printf("Enter marks: ");
    scanf("%d", &sub5);

    calculate(sub1, sub2, sub3, sub4, sub5);


    return 0;

}


void calculate(int a, int b, int c, int d, int e)
{
    int Total_marks = a + b + c + d + e ;
    printf("Total marks are %d \n\n", Total_marks);

    int percentage = (Total_marks * 100) / 500; // 360 * 100 = 36000 -> 36000 / 500 = 60

    printf("The percentage is %d\n\n", percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 70 && percentage <= 90)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 40 && percentage <= 70)
    {
        printf("Grade C\n");
    }
    else if (percentage >= 35 && percentage <= 40)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Wrong input\n");
    }

    if(percentage < 35)
    {
        printf("\nFail\n");
    }
    else
    {
        printf("\nPass\n");
    }
}


#include<stdio.h>

int calculateTotal(int a, int b, int c, int d, int e);
float calculaterPercentage(int Total);
char calculateGrade(float percentage);
int checkispassed(float percentage);

int main()
{
    int sub1, sub2, sub3, sub4, sub5;

    printf("Enter your marks: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5 );

    
    int total = calculateTotal(sub1, sub2, sub3, sub4, sub5);
    float percentage = calculatePercentage(total);
    char grade = calculateGrade(percentage);
    int isPassed = checkPassFail(percentage);

}
