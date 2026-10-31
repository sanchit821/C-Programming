// Main Concept: Function decomposition
// Target Time: 30 min

// Create a simple study-session tracker.
// Input:
// Subject
// Study time
// Break time

// Create functions to calculate:
// Total session time, Effective study time, Productivity percentage
// Productivity category

// You decide the function structure.


// first code

#include<stdio.h>

void traker(float a, float b);

int main()
{
    float study_time, break_time;
    char subject[17];

    printf("Enter you subject: \n");
    scanf("%s", subject);

    printf("How much min you want to study: \n");
    scanf("%f", &study_time);

    printf("How much min you want to have your break: \n");
    scanf("%f", &break_time);

    traker(study_time, break_time);


}

void traker(float a, float b)
{
    float total_session_time = a + b;
    printf("\n\nTotal Session time is %f\n", total_session_time);

    float effective_study_time = a;
    printf("\n\nThe Effective Study time is %f\n", effective_study_time);

    float productivity_percentage =( a / total_session_time) * 100;
    printf("\n\nThe Productiviity Percentage is %f\n", productivity_percentage);

    if( productivity_percentage >= 80.00 && productivity_percentage <= 100)
    {
        printf("Productivity Category is A\n");
    }
    else if (productivity_percentage >= 55 && productivity_percentage <= 80)
    {
        printf("\nProductivity Category is B\n");
    }
    else if (productivity_percentage >= 35 && productivity_percentage <= 55)
    {
        printf("\nProductivity Category is c\n");  
    }
    else
    {
        printf("\nStudy hard, invest more time\n");
    }


}





// Ai code


#include <stdio.h>

// 1. Function Prototypes (Declarations)
float calculate_total_time(float study, float break_time);
float calculate_effective_time(float study);
float calculate_percentage(float study, float total);
void print_productivity_category(float percentage);

int main() 
{
    float study_time, break_time;
    char subject[17];

    // Input Phase
    printf("Enter your subject: \n");
    scanf("%s", subject);

    printf("How many minutes do you want to study: \n");
    scanf("%f", &study_time);

    printf("How many minutes do you want to have your break: \n");
    scanf("%f", &break_time);

    // Calculation and Execution Phase (Decomposition in action)
    float total_session_time = calculate_total_time(study_time, break_time);
    float effective_study_time = calculate_effective_time(study_time);
    float productivity_percentage = calculate_percentage(study_time, total_session_time);

    // Display Phase
    printf("\n--- Study Session Summary (%s) ---\n", subject);
    printf("Total Session Time:      %.2f minutes\n", total_session_time);
    printf("Effective Study Time:   %.2f minutes\n", effective_study_time);
    printf("Productivity Percentage: %.2f%%\n", productivity_percentage);
    
    // Categorization Phase
    print_productivity_category(productivity_percentage);

    return 0;
}

// 2. Function Definitions (Decomposed Workers)

// Job: Only add study and break times together
float calculate_total_time(float study, float break_time) 
{
    return study + break_time;
}

// Job: Only isolate effective study time
float calculate_effective_time(float study) 
{
    return study; 
}

// Job: Only compute the math ratio/percentage
float calculate_percentage(float study, float total) 
{
    if (total == 0) return 0; // Guard against division by zero
    return (study / total) * 100;
}

// Job: Only evaluate the logic tier and print the classification
void print_productivity_category(float percentage) 
{
    if (percentage >= 80.00 && percentage <= 100.00) 
    {
        printf("Productivity Category:   A\n");
    } 
    else if (percentage >= 55.00 && percentage < 80.00) 
    {
        printf("Productivity Category:   B\n");
    } 
    else if (percentage >= 35.00 && percentage < 55.00) 
    {
        printf("Productivity Category:   C\n");
    } 
    else 
    {
        printf("Productivity Category:   Study hard, invest more time\n");
    }
}
