#include <stdio.h>
void reverse(int arr[],int a,int b){
    int i = a;
    int j = b;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int b[n] = reverse(arr,0,n-1);
    int flag = 0;
    for(int i = 0;i<=n-1;i++){
        if(arr[i]== b[i]){
            flag =1;
        }
    }
    if(flag == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
    
}