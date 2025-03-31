#include <stdio.h>
#include <limits.h>
int main(){
int n;
scanf("%d",&n);
it arr[n];
for(int i = 0;i<n;i++){
    scanf("%d",&arr[i]);
}
int max =INT_MAX;
for(int j = 0;j<n;j++){
    for(int i = 0;i<n;i++){
        if((arr[j]*arr[i])>max){
            max = arr[j]*arr[i];
        }
    }
}
printf("%d",max);
    return 0;
}