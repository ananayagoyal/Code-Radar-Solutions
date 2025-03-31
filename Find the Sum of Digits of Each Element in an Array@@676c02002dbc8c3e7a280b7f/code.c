#include <stdio.h>
void sum(int n){
    while(n!= 0){
   int s = 0;
    int digit = n%10;
    s = s+digit;
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
         sum(arr[i]);
         printf("%d ",sum);
    }
   
    return 0;
}