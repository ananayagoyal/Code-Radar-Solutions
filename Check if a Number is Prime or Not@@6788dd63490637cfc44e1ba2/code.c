#include <stdio.h>
int main() {
    int i,flag,n;
    scanf("%d",&i);
    flag = 1;
    for(n=2;n>i;n++){
        if(i%(n-1)==0)
        flag = 0;
    }
    if flag = 1
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}