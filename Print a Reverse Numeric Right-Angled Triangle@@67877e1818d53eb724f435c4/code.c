#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=m;i>=1;i--){
        for(int j=1;j<=m-i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}