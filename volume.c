/*
Author : gregory macomick
Admission : BCS-03-0141/2026
Description : Program to compute volume and surface_area of a cylinder

*/

#include <stdio.h>

#define PI 3.14159265358979323846

int main () {
	double radius, height;
	double volume, surface_area;
	
	// user prompt
	printf("Enter the radius of the cylinder: ");
	if (scanf("%lf", &radius) != 1 || radius < 0) {
		printf("Error: Please enter a valid positive number for radius.\n");
		return 1;
		

	}
	
	printf("Enter the height of the cylinder: ");
	if (scanf("%lf", &height) != 1 || height < 0) {
		printf("Error: Please enter a valid positive number for height.\n");
		return 1;
		

	}
	
	volume = PI * radius * radius * height;
	surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);
	
	
	printf("\n--- Cylinder Calculations ---\n");
	printf("Radius:       %.2f\n", radius);
	printf("Height:       %.2f\n", height);
	printf("Volume:       %.2f\n", volume);
	printf("Surface Area: %.2f\n", surface_area);
	
	
	return 0;
}