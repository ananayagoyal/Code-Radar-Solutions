#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    int flag =1;
    scanf("%d",&num);
    for(int i = 0;i<=n-1;i++){
        if(num == arr[i]){
            int flag = 0;
            printf("%d",i);
            break;
        }
    
    }
    if(flag == 1)
        {
            printf("-1");
        }
    return 0;
}