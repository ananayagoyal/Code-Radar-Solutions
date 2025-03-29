#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    int flag ;
    scanf("%d",&num);
    for(int i = 0;i<=n-1;i++){
        flag =1;
        if(num == arr[i]){
            printf("%d",i);
            int flag = 0;
            break;
        }
    
    }
    if(flag == 1)
        {
            printf("-1");
        }
    return 0;
}