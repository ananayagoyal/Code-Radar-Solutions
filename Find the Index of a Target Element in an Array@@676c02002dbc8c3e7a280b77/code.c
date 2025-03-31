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
            // flag = 0;
            break;
        }
        else{
            printf("-1");
        }
    
    }
    // if(flag == 1)
    //     {
    //         printf("-1");
    //     }
    return 0;
}