#include <stdio.h>
int main() {
    int i,flag,j,n;
    scanf("%d",&i);
    flag = 1;
    for(n=2;n<=i;n++){
        if(i%n==0)
        flag = 0;
        break;
    }
    if (flag == 1)
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}