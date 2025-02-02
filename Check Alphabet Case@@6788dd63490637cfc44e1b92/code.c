#include <stdio.h>
int main() {
    char a;
    int b;
    scanf("%c",&a);
    b = a;
    if(65 <=b && b<=91)
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    return 0;
}