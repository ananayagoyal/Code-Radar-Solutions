#include<stdio.h>
int main(){
    int m;
    scan("%d",&m);
    for(i=m;i>=1;i--){
        for(j=1;j<=i;j++)
        {
            int a=64;
            printf("%c",a+j);
        }
        printf("\n");
    }
    return 0;
}