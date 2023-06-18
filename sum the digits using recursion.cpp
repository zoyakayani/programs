#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumDigits(n / 10);
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int sum = sumDigits(number);
        printf("Sum of digits: %d\n", sum);
    }

    return 0;
}

