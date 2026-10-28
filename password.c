/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to display and select data packages
*/

# include <stdio.h>

int main () {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
    }  while (password != 1234);

    printf("Access Granted\n");

    return 0;
}