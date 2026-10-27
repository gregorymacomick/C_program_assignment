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