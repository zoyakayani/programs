#include <stdio.h>

void hailstoneSequence(int number) {
    printf("%d ", number);

    if (number == 1) {
        return;
    } else if (number % 2 == 0) {
        hailstoneSequence(number / 2);
    } else {
        hailstoneSequence(number * 3 + 1);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        printf("Hailstone sequence: ");
        hailstoneSequence(number);
        printf("\n");
    }

    return 0;
}

