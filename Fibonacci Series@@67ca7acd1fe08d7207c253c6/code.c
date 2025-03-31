#include <stdio.h>
int fibnacciSeries(int n){
    if(n==1|| n==2){
        return 1;
    }
    return fibnacciSeries(n-1)+fibnacciSeries(n-2);
}