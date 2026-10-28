/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to display and select data packages
*/

# include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;

}


int main () {
    float fahrenheit,celsius;

    printf("Enter temperature in Fahrenheight: ");
    scanf("%f", &fahrenheit);

    celsius = convertToCelsius(fahrenheit);

    printf("Temperature in Celsius: %.2f C\n", celsius);

    return 0;
}