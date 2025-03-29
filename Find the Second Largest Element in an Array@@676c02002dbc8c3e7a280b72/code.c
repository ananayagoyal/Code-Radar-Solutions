#include <stdio.h>
    int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<=n-1;i++){
    scanf("%d",&n);
}
int max=arr[0];
for(int i = 0;i<=n-1;i++){
if(arr[i]>=max){
    max = arr[i];
}
}
int smax=arr[0];
for(int i = 0;i<=n-1;i++){
if(arr[i]>=smax && smax!=max)
}
printf("%d",smax);

    return 0;
}