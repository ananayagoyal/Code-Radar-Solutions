#include <stdio.h>
int main() {
    int i,n;
    scanf("%d",&i);
    for(n=1;n<=10;n++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
    return 0;
}