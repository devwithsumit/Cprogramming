#include<stdio.h>
void reverse(int n[], int a, int b){
    for(int i=a, j=b-1; i<=j; i++, j--){
        int temp = n[i];
        n[i]= n[j];
        n[j]= temp;
    }
    return;
}
int main(){
    int a[5] = {1,2,3,4,5};
    int len = sizeof(a) / sizeof(int);
    int k = 3;
    if(k>len) k = k % len;
    reverse(a,0,len);
    reverse(a,0,k);
    reverse(a,k,len);

    for(int i=0; i<5; i++){
        printf("%d,", a[i]);
    }
    return 0;
}
