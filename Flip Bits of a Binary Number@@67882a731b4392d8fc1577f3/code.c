#include <stdio.h>
int main() {
    unsigned n;
    scanf("%1u", &n);
    printf("%u\n", (~n) & 0xF); 
    return 0;
}