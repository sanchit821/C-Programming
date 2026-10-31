// Main Concept: Multiple functions + return values
// Target Time: 25 min

// Create a student result system.

// Functions should handle:

// Taking marks
// Calculating total
// Calculating percentage
// Determining grade
// Displaying the result

#include<stdio.h>

float calculate_total(float s1, float s2, float s3, float s4, float s5);
float calculate_percentage(float total);
char determine_grade(float percentage);
void display_result(float total, float percentage, char grade);


int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    char grade;
    
    printf("\n\n------Student Result System------\n\n");
    printf("Enter marks for 5 subjects (separated by spaces): ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = calculate_total(sub1, sub2, sub3, sub4, sub5);
    percentage = calculate_percentage(total);
    grade = determine_grade(percentage);
    display_result(total, percentage, grade);

    return 0;
}



float calculate_total(float s1, float s2, float s3, float s4, float s5)
{
    return s1 + s2 + s3 + s4 + s5;
}
float calculate_percentage(float total)
{
    return (total / 500) * 100;
}
char determine_grade(float percentage)
{
    if( percentage >= 90 && percentage <= 100) return 'A';
    else if ( percentage >= 80 && percentage <= 90 ) return 'B';
    else if ( percentage >= 70 && percentage <= 80 ) return 'C';
    else if ( percentage >= 50 && percentage <= 70 ) return 'D';
    else if ( percentage >= 35 && percentage <= 50 ) return 'E';
    else return 'F';
}
void display_result(float total, float percentage, char grade)
{
    printf("\n--- Result Summary ---\n");
    printf("Total Marks: %.2f / 500.00\n", total);
    printf("Percentage:  %.2f%%\n", percentage);
    printf("Grade:       %c\n", grade);
}