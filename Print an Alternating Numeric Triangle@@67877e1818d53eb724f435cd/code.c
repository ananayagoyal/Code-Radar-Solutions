#include <stdio.h>
int main()
{
    int m,b;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        int a =i/2;
        if(a!=0){
            int b = 0;
        }
        else 
        { 
            b=1;
        }
        for(int j=1;j<=i;j++){
        
        printf("%d",b);
        if(b==1){
            b=0;
            }
        else {
            b=1;}
    }
    printf("\n");
    }
    return 0;
}