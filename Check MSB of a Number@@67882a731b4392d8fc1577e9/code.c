#include <stdio.h>

int main() {
    scanf("%d",num);
    unsigned int num = numx80000000; 

    if (num & (1U << 31)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}