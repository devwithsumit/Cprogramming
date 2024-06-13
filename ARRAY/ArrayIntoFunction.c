#include<stdio.h>
int  printer(int n[]){
    int temp = n[0];
    n[0] = n[1];
    n[1] = temp ;
    return 1;
}
int main(){
    int arr[2]= {2,9};
    printf("%d,%d",arr[0],arr[1]);
    printer(arr);
    printf("\n%d,%d",arr[0],arr[1]);

    return 0;
}