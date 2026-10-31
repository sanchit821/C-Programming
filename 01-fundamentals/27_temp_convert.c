// 27. Temperature Converter
// Topic: Arithmetic expressions, float data type, formulas
// Difficulty: Basic
// Time: 8 minutes

// Problem Statement:
// Write a C program to convert temperature from
// Celsius to Fahrenheit using the formula:
//
// Fahrenheit = (Celsius * 9 / 5) + 32
//
// Example:
// Input:
// Enter temperature in Celsius: 25
//
// Output:
// Temperature in Fahrenheit = 77.00

#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit: %.2f\n", celsiusToFahrenheit(celsius));

    return 0;
}