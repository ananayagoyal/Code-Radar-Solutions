#include <stdio.h>

void decimalToBinary(int n) {
    // Array to store binary representation (max 11 digits for numbers up to 2000)
    int binary[11];
    
    // Initialize all binary digits to 0
    for (int i = 0; i < 11; i++) {
        binary[i] = 0;
    }

    int index = 10;
    
    // Convert decimal to binary
    while (n > 0) {
        binary[index--] = n % 2;
        n = n / 2;
    }

    // Print the binary representation without leading zeros
    int start = 0;
    while (start < 11 && binary[start] == 0) {
        start++;
    }

    if (start == 11) { // Case when number is 0
        printf("0");
    } else {
        for (int i = start; i < 11; i++) {
            printf("%d", binary[i]);
        }
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    if (num < 0 || num > 2000) {
        return 1;
    }

    decimalToBinary(num);

    return 0;
}