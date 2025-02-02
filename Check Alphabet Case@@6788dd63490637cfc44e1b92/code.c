#include <stdio.h>
int main() {
    char a;
    int b;
    scanf("%c",&a);
    b = a;
    if(65 <=b && b<=90)
    {
        printf("Uppercase");
    }
    else if(b>=97 )
    {
        printf("Lowercase");
    }
    return 0;
}