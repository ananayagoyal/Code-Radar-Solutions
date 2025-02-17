#include <stdio.h>
int main() {
    int i,j,n,flag;
    scanf("%d",&i);
    flag == 0;
    for(n=2;n<=(i/2);n++){
        if(i%n==0){
            break;
            flag == 1;
        }
        
        if(flag == 0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}


























