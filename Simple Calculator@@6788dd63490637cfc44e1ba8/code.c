#include <stdio.h>
int main() {
    int a,b;
    char c;
    float d;
    scanf("%d%d%c",&a, &b, &c);
    if(c == '+')
    {
        d = a+b;
    printf("%f",d);
    }
    else if (c == '-')
    {
        d = a-b;
        printf("%f",d);
    }
    else if ( c == '*'){
        d = a*b;
        printf("%f",d);
    }
    else 
    {
        d = a/b;
        printf("%f",d);
    }
    return 0;
}