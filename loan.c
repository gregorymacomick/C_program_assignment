/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : program to check loan eligibility
*/




#include <stdio.h>

int main () {
	int age;
	double income;
	
	// prompt user
	printf("Please enter your age: ");
	if (scanf ("%d", &age) != 1) {
		printf("Invalid input for age.\n");
		return 1;
		
	}
	
	// prompt user for their annual income
	printf("Please enter your annual income (sh): ");
	if (scanf ("%lf", &income) !=1 ) {
		printf("Invalid input for income.\n");
		return 1;
		
	}
	
	// check loan eligibility
	if (age >= 21 && income >= 21000) {
		printf("Congratulations you qualify for a loan.\n");
	} else {
		printf("Unfortunately, we are unable to offer you a loan at this time.\n");	
	}
     
     return 0;
     
}