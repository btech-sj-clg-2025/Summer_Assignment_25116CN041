#include <stdio.h>
#include <ctype.h>

int main() {
    int score = 0;
    char answer;

    printf("=== QUICK QUIZ ===\n\n");

    printf("1. What is 5 + 3?\n");
    printf("A. 7\nB. 8\nC. 9\nD. 10\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'B') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B.\n\n");
    }

    printf("2. Which color is the sky on a clear day?\n");
    printf("A. Red\nB. Green\nC. Blue\nD. Yellow\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    printf("3. How many legs does a spider have?\n");
    printf("A. 4\nB. 6\nC. 8\nD. 10\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (toupper(answer) == 'C') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    printf("=== FINAL RESULT ===\n");
    printf("You scored %d out of 3!\n", score);

    return 0;
}
