#include <stdio.h>
void bubbleSort(int arr[],int n){
    for(int i =0;i<=n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}
void printArray(int arr[],n);
for(int i =0;i<=n-1;i++){
    printf("%d",arr[i]);
}
return ;

