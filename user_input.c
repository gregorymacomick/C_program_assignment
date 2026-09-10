#include <stdio.h>

int main () {
	float height;
	float bank_balance;
	char phone_number[20];
	
	
	
	printf("Enter your height(in centimeters) : \n");
	scanf("%f", &height);
	printf("Enter your bank balance(IN KES): \n");
	scanf("%f", &bank_balance);
	printf("Enter your Phonenumber : ");
	scanf("%s", &phone_number );
	
	printf("----Your Details----\n");
	printf("Height       : %.2f\n", height);
	printf("bank balance : %.2f\n", bank_balance);
	printf("phone number : %s", phone_number);
	
	return 0;
}