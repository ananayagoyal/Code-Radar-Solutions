#include <stdio.h>
int main(){
int m;
scanf("%d",&m);
for(int i=1;i<=m;i++){
    for(int j=i;j<=m;j++){
        printf("%d",j);
    }
    printf("\n ");
}
    return 0;
}