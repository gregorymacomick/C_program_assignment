/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to display and select data packages
*/

# include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <=200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main () {
    int units;
    float totalBill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units consumed.\n");
        return 1;
    }

    totalBill = calculateElectricBill(units);

    printf("Total electricity bill: Ksh. %.2f\n", totalBill);

    return 0;
}