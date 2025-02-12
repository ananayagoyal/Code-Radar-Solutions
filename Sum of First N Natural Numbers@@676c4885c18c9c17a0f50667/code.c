#include <stdio.h>
int main(){
    int i,n,c,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("%d",sum);

    return 0;
}