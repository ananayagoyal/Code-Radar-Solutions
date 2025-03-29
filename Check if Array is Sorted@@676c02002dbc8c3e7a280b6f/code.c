#include <stdio.h>
int main(){
int n,i[n];
scanf("%d",&n);
for(int j = 0;j<=n-1;j++){
    scanf("%d",&i[j]);
}
int num ;
int max = i[n-1];
for(int j = 0;j<=n-1;j++){
    num = 0;
    if(max > i[j-1] ){
        num = 1;
    }
}
    if(num == 1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
   


    return 0;
}