#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    unsigned int flipped = num ^ UINT_MAX;
    printf("%u", flipped);
    
    return 0;
}