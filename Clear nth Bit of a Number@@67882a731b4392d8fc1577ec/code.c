#include <stdio.h>
int main() {
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", n & ~(1 << p));
    return 0;
}