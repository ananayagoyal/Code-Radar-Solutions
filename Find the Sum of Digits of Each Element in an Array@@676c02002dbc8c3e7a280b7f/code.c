#include <stdio.h>
int sum(int n){
    int sum = 0;
    while(n!= 0){
    int digit = n%10;
    sum = sum+digit;
    n = n/10;
    }
    return sum;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=n-1;i++){
        int m =sum(arr[i]);
         printf("%d ",m);
    }
   
    return 0;
}