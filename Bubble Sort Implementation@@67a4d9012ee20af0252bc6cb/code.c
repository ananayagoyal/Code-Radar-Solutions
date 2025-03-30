#include <stdio.h>
int sort(int arr[n]){
    for(int i =0;i<=n-1;i++){
        for(j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}