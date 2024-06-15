#include<stdio.h>
int maze(int n , int m){
    int rightways = 0 ;
    int downways = 0;
    if(n ==1 && m == 1) return 1;
    if(n==1){
    rightways += maze( n , m-1);
    }
    if(m ==1){
            downways += maze(n-1 ,m);
    }
    if(n>1 && m>1){
    rightways += maze( n , m-1);
    downways += maze(n-1 ,m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int nr = 3;
    int nc = 3;
    printf("%d\n", maze(nr,nc)); 
    return 0;
}