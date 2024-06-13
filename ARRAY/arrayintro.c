#include<stdio.h>
int main(){
    int a[5] = {1,2,1,8,3};
    for(int i=0; i<=4; i++){
        printf("enter %d number :", i+1);
        scanf("%d", &a[i]);
    }
    for(int i=0; i<=4 ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}