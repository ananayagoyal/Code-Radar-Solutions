#include<stdio.h>
int main(){
    int m,j;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int k=2;k<=j;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}