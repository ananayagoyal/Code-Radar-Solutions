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
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int f=0;f<=n-1;f++){
        scanf("%d\n",&arr[f]);
    }
    scanf("%d",&k);
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int f=0;f<=n-1;f++){
        printf("%d\n",arr[f]);
    }
}
