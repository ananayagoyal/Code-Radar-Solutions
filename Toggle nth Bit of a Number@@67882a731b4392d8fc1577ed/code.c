#include <stdio.h>
int main() {
    int n, p;
    scanf("%1d%1d", &n, &p);  // %1d ensures single-digit input
    printf("%d", n ^ (1 << p));
    return 0;
}