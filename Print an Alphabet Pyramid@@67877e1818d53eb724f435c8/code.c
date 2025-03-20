#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
        {
            int a=64;
            printf("%c",a+j);
        }
        printf("\n");
    }
    return 0;
}