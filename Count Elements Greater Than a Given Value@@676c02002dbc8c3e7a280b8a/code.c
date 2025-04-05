#include <stdio.h>
int main(){
int n,k;
scanf("%d%d",&n,&k);
int arr[n];
for(int i = 0;i<=n-1;i++){
    scanf("%d",&arr[i]);
}
int count = 0;
for(int i = 0;i<=n-1;i++){
   if(arrr[i]>k){
    count++;
   }
}
printf("%d",count);
    return 0;
}