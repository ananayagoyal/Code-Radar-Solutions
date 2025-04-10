#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n ? __builtin_ctz(n) : -1);
    return 0;
}