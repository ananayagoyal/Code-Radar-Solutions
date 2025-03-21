#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(j==1){
                printf("*");
            }
            else if(i==1){
            printf("* ");
            }
            else if(i==j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}