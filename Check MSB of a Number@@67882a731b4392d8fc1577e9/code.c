#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("The MSB of 0 is not defined.\n");
        return 0;
    }
    int msb = 1;
    while (num > 1) {
        num >>= 1;  
        msb <<= 1;  
    }
    printf("%d", msb);

    return 0;
}