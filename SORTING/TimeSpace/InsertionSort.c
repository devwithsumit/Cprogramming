#include<stdio.h>
int main(){
    int a[] = {5,8,9,4,2,1,7,6,3};
    int len = sizeof(a)/sizeof(int);
    for(int i=1; i<len ;i++){
        int j=i;
        while(j>0 && a[j]<a[j-1]){
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    for(int i=0 ;i<len ;i++){
        printf("%d ",a[i]);
    }
    return 0;
}