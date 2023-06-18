#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2); // Recursive call with quotient
        printf("%d", decimal % 2);    // Print the remainder (binary digit)
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Error: Please enter a non-negative decimal number.\n");
    } else {
        printf("Binary representation: ");
        if (decimal == 0) {
            printf("0");
        } else {
            decimalToBinary(decimal);
        }
        printf("\n");
    }

    return 0;
}

