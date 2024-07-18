#include<stdio.h>
#include<stdbool.h>
int main(){
    //TimeComplexity -> best case = O(n),
    //->Worst case/Avg. case = O(n^2);
    //SpaceComplexity ->All case = O(1);
    int a[] = {5,8,9,4,2,1,7,6,3};
    int len = sizeof(a)/sizeof(int);
    for(int i=0; i<len-1 ;i++){
        int flag = true;
        for(int j=0 ; j<len-1-i;j++){
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0 ;i<len ;i++){
        printf("%d ",a[i]);
    }

    //descending order
    // int a[] = {5,8,9,4,2,1,7,6,3};
    // int len = sizeof(a)/sizeof(int);
    // for(int i=0; i<len-1 ;i++){
    //     int flag = true;
    //     for(int j=len-1 ; j>=0+i;j--){
    //         if(a[j] < a[j-1]){
    //         int temp = a[j];
    //         a[j] = a[j-1];
    //         a[j-1] = temp;
    //         flag = false;
    //         }
    //     }
    //     if(flag==true) break;
    // }
    // for(int i=0 ;i<len ;i++){
    //     printf("%d ",a[i]);
    // }
    return 0;
}
