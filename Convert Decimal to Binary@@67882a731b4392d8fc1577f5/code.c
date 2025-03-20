#include <stdio.h>

void decimalToBinary(int n) {
    
    int binary[32];
    for (int i = 0; i < 32; i++) {
        binary[i] = 0;
    }

    int index = 31;
    while (n > 0) {
        binary[index--] = n % 2;
        n = n / 2;
    }

    for (int i = 0; i < 32; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}