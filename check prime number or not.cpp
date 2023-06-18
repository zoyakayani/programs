#include <stdio.h>

int isPrime(int number, int divisor) {
    if (number <= 2)
        return (number == 2) ? 1 : 0;

    if (number % divisor == 0)
        return 0;

    if (divisor * divisor > number)
        return 1;

    return isPrime(number, divisor + 1);
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    if (isPrime(number, 2))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}

