# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main () {
    int secretNumber, guess, attempts = 0;

    srand(time(0));
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the number guessing game!\n");
    printf("Guess a number between 1 and 20.\n ");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if ( guess < secretNumber ) {
            printf("Too Low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You guessed the correct number in %d attempts.\n", attempts);

            break;
        }
    }
    return 0;
}