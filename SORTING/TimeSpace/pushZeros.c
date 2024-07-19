#include<stdio.h>
int main(){
    //Time Complexity - O(n^2)
    //Space Complexity - O(1);
    int a[] = {5,0,6,4,2,1,0,0,3};
    int len = sizeof(a)/sizeof(int);
    for(int i=0; i<len-1 ;i++){
        for(int j=0 ; j<len-1-i;j++){
            if(a[j]==0){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
    for(int i=0 ;i<len ;i++){
        printf("%d ",a[i]);
    }

    //Time Complexity - O(n);
    //Space Complexity - O(n);
    // int a[] = {5,0,6,4,2,1,0,0,3};
    // int len = sizeof(a)/sizeof(int);
    // int b[len];
    // int ib = 0;
    // for(int i=0; i<len ;i++){
    //     if(a[i]!=0){
    //         b[ib] = a[i];
    //         ib++;
    //     }
    // }
    // while(ib!=len){
    //     b[ib]=0;
    //     ib++;
    // }
    // for(int i=0 ;i<len ;i++){
    //     printf("%d ",b[i]);
    // }

    return 0;
}
