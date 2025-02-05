#include <stdio.h>
int main() {
    int i,flag,n;
    scanf("%d",&i);
    flag = 1;
    j = n/2;
    for(n=2;j<=i;n++){
        if(i%n==0)
        flag = 0;
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