#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=m;i>=1;i--){
        for(int j=1;j<=i;j++)
        {
            int a=64;
            int d= a+j;
            printf("%c",d);
        }
        printf("\n");
    }
    return 0;
}