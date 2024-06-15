#include <stdio.h>
int fact(int n){
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = prod * i;
    }
    return prod;
}
int combo(int x, int y){
    int nCr= fact(x)/(fact(y)*(fact(x-y)));
    return nCr;
}
int permute(int x, int y){
    int nPr= fact(x)/fact(x-y);
    return nPr;
}
int main()
{
    
    //Pascal Triangle using Combination
    // int n = 4;
    // int nsp = n;
    // for(int i=0 ; i<=n ; i++){
    //     for(int k=1 ; k<=nsp ; k++){
    //         printf(" ");
    //     }
    //     nsp--;
    //     for(int j=0; j<=i ; j++){
    //         printf("%d ", combo(i,j));
    //     }
    //     printf("\n");
    // }


    //Permutation by using function
    // int n =7;
    // int r= 3 ; 
    // printf("%d ", permute(n,r));
    // return 0;
}