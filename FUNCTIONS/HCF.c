#include<stdio.h>
int min(int a, int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a, int b){
    int hcf;
    for(int i=min(a,b) ; i>=1 ; i++){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a = 12;
    int b= 60;
    int hcf = gcd(a,b);
    printf("%d", hcf);

    return 0;
}