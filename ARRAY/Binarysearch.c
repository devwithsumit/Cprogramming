#include<stdio.h>
int main(){

    
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(int);
    int start =0;
    int end = len-1;
    int mid = (start+end)/2;
    int find = 3;
    int flag = 0;
    while (start <= end){
        if(find == arr[mid]){
            flag =4;
            break;
        }
        else if(find < arr[mid]){
            end = mid-1;
            mid = (end+start)/2;
        }
        else{
            start =mid+1;
            mid = (start+end)/2;
        }
    }
    if(flag !=0){
        printf("found at %d index\n", mid);
    }
    else{
        printf("Not found\n");
    }

    return 0;
}
