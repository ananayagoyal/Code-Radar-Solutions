#include <stdio.h>
void decimalToBinary(int n) {
    int binary[4];
    for (int i = 0; i < 4; i++) {
        binary[i] = 0;
    }

    int index = 3;
    while (n > 0 && index >= 0) {
        binary[index--] = n % 2;
        n = n / 2;
    }
    for (int i = 0; i < 4; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    if (num < 0 || num > 15) {
        return 1;
    }

    decimalToBinary(num);

    return 0;
}