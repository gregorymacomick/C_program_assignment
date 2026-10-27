# include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance, fare;

    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    if (distance < 0) {
        printf("Invalid distance entered.\n");
        return 1;
    }

    fare = calculateFare(distance);

    printf("Total fare: Ksh. %.2f\n", fare);

    return 0;

}