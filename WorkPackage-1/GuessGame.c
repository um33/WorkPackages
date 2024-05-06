#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int maxGuesses = 10;
    int number, guess, guessCount;
    char choice;

    srand(time(NULL));

    do {
        number = rand() % 100 + 1;  
        guessCount = 0;

        printf("Guess the number (1 to 100). You have %d attempts.\n", maxGuesses);

        while (guessCount < maxGuesses) {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            if (guess < 1 || guess > 100) {
                printf("Please enter a number within the valid range (1 to 100).\n");
                continue;
            }

            guessCount++;

            if (guess == number) {
                printf("You have guessed %d times and your guess is correct.\n", guessCount);
                break;
            } else if (guess < number) {
                printf("Your guess is too low.\n");
            } else {
                printf("Your guess is too high.\n");
            }
        }

        if (guessCount >= maxGuesses) {
            printf("You've reached the maximum number of guesses. The number was %d.\n", number);
        }

        printf("Do you want to play another round? (y/n): ");
        scanf(" %c", &choice);  

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
