#include <stdio.h>
int main(){
int n,i[n];
scanf("%d",&n);
for(int j = 0;j<=n;j++){
    scanf("%d",&i[j]);
}
for(int j = 0;j<=n;j++){
    if(i[j]<=i[j+1]){
        sorted = 0;
        break;
    }
    if(sorted){
        printf("Sorted");
    }
    else{
    printf("Not Sorted");
    }
}

    return 0;
}