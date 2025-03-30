#include<stdio.h>
void prime(int n){
    int flag = 0;
    for(int i =2;i<=n/2;i++){
        if(n%i == 0){
            flag =1;
            break;
        }
    }
     return;
}
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int count = n;
    for(int i=0;i<=n-1;i++){
        if(prime(arr[i])){
            count = count -1;
        }
    }
    printf("%d",count);
    return 0;
}