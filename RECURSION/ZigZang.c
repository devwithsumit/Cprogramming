#include<stdio.h>
void zigZag(int n){
    if(n==0) return;
    printf("%d", n);
    zigZag(n-1);
    printf("%d", n);
    zigZag(n-1);
    printf("%d", n);
    return;
}
int main(){
    int n = 4;
    zigZag(n);
    return 0;
}