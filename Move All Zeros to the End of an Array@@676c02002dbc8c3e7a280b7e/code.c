#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int ans[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int idx=0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i] != 0){
            arr[i] = ans[idx];
            idx++;
        }
        else{
            ans[idx] = 0
        }
    }

    
    for(int i = 0;i<=n-1;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}