
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    srand((unsigned int)time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("\nWelcome to our Number Guessing Game!!\n");

    while (guess != answer) {

        printf("Enter a number between %d - %d: ", min, max);

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input! Please enter a number.\n");

            while (getchar() != '\n');

            continue;
        }

        if (guess < min || guess > max) {
            printf("Please enter a number between %d and %d.\n", min, max);
            continue;
        }

        tries++;

        if (guess > answer) {
            printf("Too High!\n");
        }
        else if (guess < answer) {
            printf("Too Low!\n");
        }
        else {
            printf("Correct!\n");
        }
    }

    printf("The answer is: %d\n", answer);
    printf("It took you %d tries to guess.\n", tries);

    return 0;
}
