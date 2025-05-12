#include <stdio.h>

int main() {
    int choice1, choice2;

    printf("Welcome to the 'Nietzsche or Not?' Philosopher Bot!\n\n");

    // First Question: Free will
    printf("Q1: Do you believe in free will?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Your answer: ");
    scanf("%d", &choice1);

    // Second Question: Suffering
    printf("\nQ2: Do you think suffering makes people stronger?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Your answer: ");
    scanf("%d", &choice2);

    printf("\n--- Analysis ---\n");

    // Conditional logic based on answers
    if (choice1 == 1 && choice2 == 1) {
        printf("You align with existentialist thinkers like Jean-Paul Sartre.\n");
    } else if (choice1 == 2 && choice2 == 1) {
        printf("You might admire Nietzsche's idea of becoming through struggle.\n");
    } else if (choice1 == 2 && choice2 == 2) {
        printf("You lean toward nihilism-maybe embrace the void.\n");
    } else {
        printf("You might be a humanist with a positive outlook.\n");
    }

    // Additional philosophical response based on first question
    if (choice1 == 1) {
        printf("\nYou believe in free will. Remember, with freedom comes responsibility!\n");
    } else {
        printf("\nYou don't believe in free will. Maybe you're destined for something greater?\n");
    }

    return 0;
}
