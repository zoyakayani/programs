#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1); // Recursive call to print previous numbers
        printf("%d ", n);    // Print the current number
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d numbers: ", n);
    printNumbers(n);
    printf("\n");

    return 0;
}

