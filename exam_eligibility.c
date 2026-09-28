/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to prove exam eligibility
*/

#include <stdio.h>

int main () {
    float attendance;
    float average_marks;

    printf("Enter total attendance : ");
    scanf("%f", &attendance);

    printf("Enter average marks : ");
    scanf("%f", &average_marks);

    if (attendance >=75 && average_marks >=40) {
        printf("congratulations you are eligible to sit for your examination");
    }
    else {
        printf("Sorry, you have to be competent");
    }

    return 0;

}