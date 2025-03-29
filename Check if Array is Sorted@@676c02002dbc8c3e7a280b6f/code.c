#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int i[n];
for(int j = 0;j<=n-1;j++){
    scanf("%d",&i[j]);
}
int num ;
num = 0;
for(int j = 0;j<=n-1;j++){
    if(i[j] > i[j+1] ){
        num = 1;
        break;
    }
}
    if(num == 1){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
   


    return 0;
}