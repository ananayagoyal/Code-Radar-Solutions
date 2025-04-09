#include <stdio.h>
#include <limits.h> // For INT_MAX, CHAR_BIT, etc.

int isMSBSet(int num) {
    return (num >> (sizeof(int) * 8 - 1)) & 1;
}

int main() {
    int num;
    scanf("%d", &num); 

    if (isMSBSet(num)) {
        printf("Set"); 
    } else {
        printf("Not Set"); 
    }

    return 0;
}