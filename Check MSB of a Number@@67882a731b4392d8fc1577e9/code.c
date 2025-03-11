#include <stdio.h>

int main() {
    int num,b;
    scanf("%d",num);
    unsigned int b= numx80000000; 

    if (b & (1U << 31)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}