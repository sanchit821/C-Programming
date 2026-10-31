// 28. Calculate Percentage
// Topic: Arithmetic expressions, float data type,
//       relational operators, conditional statements
// Difficulty: Basic
// Time: 10 minutes

// Problem Statement:
// Write a C program to accept marks obtained in
// multiple subjects, calculate the total marks,
// and determine the percentage.
//
// Example:
// Input:
// Enter marks in 5 subjects: 80 75 90 85 70
//
// Output:
// Total marks = 400
// Percentage = 80.00%

#include <stdio.h>

float calculatePercentage(float science, float maths, float english)

{
    float total = science + maths + english ;
    float percentage = total / 3;
    return percentage;
    
}

int main() {

    float answer;
    answer = calculatePercentage(86, 60, 40);
    printf("percentage = %.2f\n", answer);
    return 0;

}


#include <stdio.h>

float calculatePercentage(float science, float maths, float english);

int main()
{
    float science = 99, maths = 98, english =87;

    printf("Percentage = %.2f%%\n", calculatePercentage(science, maths, english));
    return 0;
}

float calculatePercentage(float science, float maths, float english)
{
    return ((science + maths + english) / 3) ;

}




#include <stdio.h>

float calculatePercentage(float science, float maths, float english);

int main()
{
    float science = 99, maths = 98, english = 87;

    printf("Percentage = %.2f%%\n",
           calculatePercentage(science, maths, english));

    return 0;
}

float calculatePercentage(float science, float maths, float english)
{
    float total = science + maths + english;
    return total / 3;
}