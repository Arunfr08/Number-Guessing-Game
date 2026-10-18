#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>

int readInteger(const char *prompt, int *value) {
    char input[100];
    char *end;

    printf("%s", prompt);

    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 0;
    }

    errno = 0;
    long number = strtol(input, &end, 10);

    while (isspace((unsigned char)*end)) {
        end++;
    }

    if (end == input || *end != '\0' ||
        errno == ERANGE || number < INT_MIN || number > INT_MAX) {
        printf("Invalid input! Please enter a whole number.\n");
        return -1;
    }

    *value = (int)number;
    return 1;
}

int playGame(void) {
    const int min = 1;
    const int max = 100;

    int answer = rand() % (max - min + 1) + min;
    int guess;
    int tries = 0;
    int result;

    printf("\nI'm thinking of a number between %d and %d.\n", min, max);

    while (1) {
        result = readInteger("Enter your guess: ", &guess);

        if (result == 0) {
            return 0;
        }

        if (result == -1) {
            continue;
        }

        if (guess < min || guess > max) {
            printf("Please enter a number between %d and %d.\n", min, max);
            continue;
        }

        tries++;

        if (guess > answer) {
            printf("Too high! Try again.\n");
        } else if (guess < answer) {
            printf("Too low! Try again.\n");
        } else {
            printf("\nCorrect! You guessed the number!\n");
            printf("The answer was: %d\n", answer);
            printf("Number of valid guesses: %d\n", tries);
            return 1;
        }
    }
}

int main(void) {
    char choice[20];

    srand((unsigned int)time(NULL));

    printf("================================\n");
    printf("     NUMBER GUESSING GAME\n");
    printf("================================\n");

    do {
        if (!playGame()) {
            printf("\nInput ended. Exiting game.\n");
            break;
        }

        printf("\nWould you like to play again? (y/n): ");

        if (fgets(choice, sizeof(choice), stdin) == NULL) {
            break;
        }

        char *response = choice;

        while (isspace((unsigned char)*response)) {
            response++;
        }

        if (tolower((unsigned char)*response) != 'y') {
            printf("\nThanks for playing!\n");
            break;
        }

    } while (1);

    return 0;
}
