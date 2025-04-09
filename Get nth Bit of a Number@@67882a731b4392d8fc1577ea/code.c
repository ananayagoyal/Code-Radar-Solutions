#include <stdio.h>
#include <limits.h> // For INT_MAX

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int num, n;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }


    if (scanf("%d", &n) != 1) { 
        return 1;
    }
    if (n < 0 || n >= sizeof(int) * 8) {
     sizeof(int) * 8 - 1;
        return 1;
    }

    int bitValue = getNthBit(num, n);
    printf("Bit %d of %d is: %d\n", n, num, bitValue);
    getchar(); 
    getchar(); 

    return 0;
}