#include <stdio.h>

int main() {
    int m, i, j, k;
    scanf("%d", &m);
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }
    for(i = m - 1; i >= 1; i--) {
        for(j = 1; j <= m - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}