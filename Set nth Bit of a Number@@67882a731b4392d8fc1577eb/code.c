#include <stdio.h>

int main() {
    int num, bit_position;
    scanf("%d", &num);
    scanf("%d", &bit_position);
    num = num | (1 << bit_position);
    printf("%d", bit_position, num);
    
    return 0;
}