#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t num;
    scanf("%u", &num);
    printf("%d\n", num ? __builtin_ctz(num) : 32);
    return 0;
}