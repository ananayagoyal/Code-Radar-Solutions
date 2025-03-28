#include <stdio.h>
int main(){
    int m,i,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        for(j=1;j=m-i;j++){
            printf("\n");
        }
        int a = 1;
        for(k=a;k<=i;k++){
            printf("* ");
            a = a+2;
        }
    }
    return 0;
}