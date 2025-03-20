#include <stdio.h>
int main(){
int m;
int a = 1;
scanf("%d",&m);
for(int i=1;i<=m;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a++;
    }
    printf("\n");
}
    return 0;
}