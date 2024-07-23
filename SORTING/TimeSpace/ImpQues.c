#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
int main(){
    //Find kth smallest element from given array
    // int a[] = {5,8,9,2,1};
    // int len = sizeof(a)/sizeof(int);
    // int k = 3;
    // int minNum = 0;
    // for(int i=0; i<k ;i++){
    //     int min = INT_MAX,minIndex;
    //     for(int j=i; j<len ; j++){
    //         if(a[j]<min){
    //             min = a[j];
    //             minNum = min;
    //             minIndex = j;
    //         }
    //     }
    //     int temp = a[i];
    //     a[i] = a[minIndex];
    //     a[minIndex] = temp;
    // }
    // printf("\n");
    // printf("%d\n",minNum);
    // for(int i=0 ;i<len ;i++){
    //     printf("%d ",a[i]);
    // }

    //Find the MINIMUM possible sum of two numbers
    //formed from the digits of the array
    //Hint -> form the smallest no. and second smallest no.
    int a[] = {5,9,8,2,1};
    int len = sizeof(a)/sizeof(int);
    int small = 0;
    int small2 = 0;
    for(int i=0; i<len ;i++){
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
        small = small*10+min;
    }
    int flag = false;
    int j = len-1;
    while(flag == false){
        if(a[j]!=a[j-1]){
            int temp =a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            flag = true;
        }
        else{
            j--;
        }
    }
    for(int i=0 ;i<len ;i++){
        printf("%d ",a[i]);
        small2 = small2*10+a[i];
    }
    printf("\n%d + %d = %d",small,small2,small+small2);
    printf("\n");
    return 0;
}