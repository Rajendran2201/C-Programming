#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 1;
    do {
        srand(time(NULL));

        printf("Press Enter to roll the dice...\nPress 1 to stop rolling the dice: ");
        int userInput = getchar();

        if (userInput == '1') {
            printf("Stopping the game.\n");
            break;  // Exit the loop if the user enters '1'
        }

        int diceResult = rand() % 6 + 1; // Random number between 1 and 6
        printf("You rolled a %d!\n", diceResult);

    } while (1);

    return 0;
}
