#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed for generating random numbers
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    do {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment the number of attempts
        attempts++;

        // Check if the guess is correct
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Try a higher number.\n");
        } else {
            printf("Try a lower number.\n");
        }

    } while (1); // Infinite loop until the correct guess is made

    return 0;
}
