#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = INT_MIN;
    int smax = INT_MIN;
    int flag = -1;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            smax = max; 
            max = arr[i]; 
            flag = 0;
        }
        else if(arr[i] > smax && arr[i] != max) {
            smax = arr[i];
            flag = 0;
        }
    }
    
    if (flag == 0){
        printf("%d", smax);
    }
    else if(flag == -1) {
        printf("%d",flag);
    }
    return 0;
}