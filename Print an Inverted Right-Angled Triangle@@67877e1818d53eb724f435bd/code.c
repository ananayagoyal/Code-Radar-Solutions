#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(j=i;j>=0;j++)
        printf("%d",j);
    }
    printf("%d",i);
    return 0;
}