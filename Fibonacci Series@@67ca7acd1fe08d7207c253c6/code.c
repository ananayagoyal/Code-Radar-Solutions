#include <stdio.h>
int fibonacciSeries(int n){
    if(n==1|| n==2){
        return 1;
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    for(i=1;i<=n;i++){
        printf("%d",fibonacciSeries(n));
    }
}