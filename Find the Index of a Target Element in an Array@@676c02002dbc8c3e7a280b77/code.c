#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    for(int i = 0;i<=n-1;i++){
        if(num == arr[i]){
            printf("%d",i);
            break;
        }
    
    }
    else
        {
            printf("-1");
        }
    return 0;
}