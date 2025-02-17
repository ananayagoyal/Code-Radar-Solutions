#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is 0, there is no MSB
    if (num == 0) {
        printf("The MSB of 0 is not defined.\n");
        return 0;
    }

    // Find the MSB using bit shifting
    int msb = 1;
    while (num > 1) {
        num >>= 1;  // Right shift the number by 1
        msb <<= 1;  // Left shift msb to the next higher bit position
    }

    // Output the MSB (the most significant bit)
    printf("The MSB of the given number is: %d\n", msb);

    return 0;
}