/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to display and select data packages
*/

#include <stdio.h>

int main () {
    int choice;

    printf("----Data Bundles Offer----\n");
    printf("1. 100MB = KES 50\n");
    printf("2. 500MB = KES 200\n");
    printf("3. 1GB   = KES 350\n");
    printf("4. 2GB   = KES 600\n");

    printf(" Enter your choice : ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            printf("You selected 1. 100MB = KES 50\n");
            break;

        case 2:
            printf("You selected 2. 500MB = KES 200\n");
            break;

        case 3:
            printf("You selected 3. 1GB   = KES 350\n ");
            break;

        case 4:
            printf("You selected 4. 2GB   = KES 600\n ");
            break;

        default :
            printf("Invalid choice. Please choose between ( 1-4 ) !");
    }

    return 0;
}