#include <stdio.h>
#include <limits.h>
    int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<=n-1;i++){
    scanf("%d",&arr[i]);
}
int max=INT_MIN;
for(int i = 0;i<=n-1;i++){
if(arr[i]>=max){
    max = arr[i];
}
}
int smax= -1;
for(int i = 0;i<=n-1;i++){
if(arr[i]>=smax && smax!=max){
    smax = arr[i];
}
}
printf("%d",smax);

    return 0;
}