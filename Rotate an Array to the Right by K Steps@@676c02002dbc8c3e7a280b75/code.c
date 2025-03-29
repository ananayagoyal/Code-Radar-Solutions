#include <stdio.h>
int reverse(int arr[],int a,int b){
    int i=a;
    int j =b;
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
        scanf("%d ",& arr[i]);
    }
    int k;
    k = k%n;
    scanf("%d",&k);
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i = 0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}