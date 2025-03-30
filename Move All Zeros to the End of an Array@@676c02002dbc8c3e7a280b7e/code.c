#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int aa[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i] != 0){
            arr[i] == aa[a];
            a++;
        }

while(a!=n){
    aa[a]=0;
    a++;
}
    }
    for(int i = 0;i<=n-1;i++){
        printf("%d",aa[i]);
    }
    return 0;
}