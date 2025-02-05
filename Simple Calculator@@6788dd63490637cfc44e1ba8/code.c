#include <stdio.h>
int main() {
    float a,b;
    char c;
    float d;
    scanf("%f %f %c",&a, &b, &c);
    if(c == '+')
    {
        d = a+b;
    printf("%d",d);
    }
    else if (c == '-')
    {
        d = a-b;
        printf("%d",d);
    }
    else if ( c == '*'){
        d = a*b;
        printf("%f",d);
    }
    else 
    {
        if( b != 0){
        d = a/b;
        printf("%f",d);
        }
    }
    return 0;
}