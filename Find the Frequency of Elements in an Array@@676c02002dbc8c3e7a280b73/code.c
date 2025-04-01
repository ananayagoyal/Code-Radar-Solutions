#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n]; 
    int c=1;
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<3;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
        }
        }
    }   
    printf("%d",c);
    }
   
    
    return 0;
}