#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
int main(){
    //TimeComplexity = best/worst/avg case = O(n^2)
    //SpaceComplexity = O(1);
    int a[] = {5,8,9,4,2,1,7,6,3};
    int len = sizeof(a)/sizeof(int);
    for(int i=0 ;i<len ;i++){
        printf("%d ",a[i]);
    }
    for(int i=0; i<len-1 ;i++){
        int min = INT_MAX,minIndex;
        for(int j=i; j<len ; j++){
            if(a[j]<min){
                min = a[j];
                minIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    printf("\n");
    for(int i=0 ;i<len ;i++){
        printf("%d ",a[i]);
    }
    return 0;
}