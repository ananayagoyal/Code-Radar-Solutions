#include <stdio.h>
#include <stdint.h>

int count_leading_zeros(uint32_t num) {
    if (num == 0) return 32;
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) break;
        count++;
    }
    return count;
}

int main() {
    uint32_t num;
    scanf("%u", &num);
    printf("%d\n", count_leading_zeros(num));
    return 0;
}