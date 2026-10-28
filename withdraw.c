/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to display and select data packages
*/

# include <stdio.h>

int main () {
    float balance, amount;

    printf("Enter your account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);

        balance = balance - amount;

        printf("Remaining balance: %.2f\n", balance);
    }
    printf("Account balance is zero .Withdrawal stopped. \n");

    return 0;
}