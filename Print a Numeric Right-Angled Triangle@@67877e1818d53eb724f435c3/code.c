#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}