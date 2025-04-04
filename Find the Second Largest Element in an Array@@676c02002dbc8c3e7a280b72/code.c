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
    int smax = -1 ;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            smax = max; 
            max = arr[i]; 
        }
        else if(arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }
    
        printf("%d", smax);
    
    return 0;
}