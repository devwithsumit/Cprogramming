#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(a)/sizeof(int);
    int sum = 8;
    int i=0,j=len-1;
    while(i<j){
        if(a[i]+a[j]==sum){
            printf("(%d,%d)",a[i],a[j]);
            break;
        }
        if(a[i]+a[j]<sum){
            i++;
        }
        if(a[i]+a[j]>sum){
            j--;
        }
    }

    return 0;
}