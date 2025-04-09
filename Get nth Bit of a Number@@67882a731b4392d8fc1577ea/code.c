#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);

    if (n < 0 || n >= sizeof(int) * 8) {
       int b =1;
        return b;
    }

    int bitValue = getNthBit(num, n);
   int a = 0;
    return a;
}