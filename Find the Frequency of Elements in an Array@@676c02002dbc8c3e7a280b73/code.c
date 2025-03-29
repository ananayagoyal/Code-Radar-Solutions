#include <stdio.h>
int main(){
int n;
int arr[n];
scanf("%d",&n);
int count;
for(int i= 0;i<=n-1;i++){
    scanf("%d",arr[i]);
}
for(int i = 0;i<=n-1;i++){
    for(int j = 0;j<=n-1;j++){
        arr[i] == arr[j]
        count ++;
    }
    printf("%d %d",arr[i],count);
}
    return 0;
}