#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);

    if (n < 0 || n >= sizeof(int) * 8) {
        printf("1");
        return;
    }

    int bitValue = getNthBit(num, n);
    printf("0");
    return ;
}