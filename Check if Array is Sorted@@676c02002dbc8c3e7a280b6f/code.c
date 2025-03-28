#include <stdio.h>
int main(){
int n,i[n];
scanf("%d",&n);
for(int j = 0;j<=n;j++){
    scanf("%d",&i[j]);
}
for(int j = 0;j<=n;j++){
    if(i[j]<=i[j+1]){
        printf("Sorted");
        break;
    }
    else{
    printf("Not Sorted");
    break;
    }
}

    return 0;
}