/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : program to calculate water bill consumption
*/

#include <stdio.h>

int main () {
    float consumed_units;
    float water_bill;

    printf("Enter Units Consumed: ");
    scanf("%f", &consumed_units);
    
    if (consumed_units <=30) {
        water_bill = consumed_units * 20;
        printf("%.2f", water_bill);
    }
    else if (consumed_units >=31 && consumed_units <= 60 ) {
        water_bill = consumed_units * 25;
        printf("%.2f", water_bill);
    }
    else if (consumed_units >60 ) {
        water_bill = consumed_units * 30;
        printf("%.2f", water_bill);
    }
    return 0;
}