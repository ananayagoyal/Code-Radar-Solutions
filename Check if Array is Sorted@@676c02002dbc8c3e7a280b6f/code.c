#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int i[n];
for(int j = 0;j<=n-1;j++){
    scanf("%d",&i[j]);
}
int num ;

for(int j = 0;j<=n-1;j++){
    num = 0;
    if(i[j] <= i[j+1] ){
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