#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=0;j++)
        printf("%d",*);
        printf("\n");
    }
    
    return 0;
}