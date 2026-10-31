// Main Concept: Variable shadowing + scope
// Target Time: 25 min
// Create a program containing a global variable and local variables with the same name in different functions. Predict the output before running the program, then verify it.


#include<stdio.h>

int number = 5;
void handle_number1(void);
void handle_number2(void);

int main()
{
    int number = 10;

    handle_number1();
    handle_number2();

    return 0;


}

void handle_number1()
{
    printf("The global number is %d\n", number);

}

void handle_number2()
{
    int number = 99;
    printf("The local number is %d\n", number);
}