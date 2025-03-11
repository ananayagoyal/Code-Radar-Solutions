#include <stdio.h>

void decimalToBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        unsigned int bit = (num >> i) & 1;  
        if (i % 8 == 0) {
           
        }
    }
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("%u",num);
    decimalToBinary(num);

    return 0;
}