#include <stdio.h>
#include <limits.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max =INT_MIN;
for(int j = 0;j<n;j++){
    for(int i = 0;i<n;i++){
        int product = (arr[j]*arr[i]);
        if(product >max){
            max = product;
        }
    }
}
printf("%d",max);
    return 0;
}