#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int n=1;n<=m-i;n++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
    
        printf("\n");
    }
    return 0;
}