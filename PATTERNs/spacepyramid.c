#include<stdio.h>
int main (){

    // int n =4;
    // // printf("Enter n :");
    // // scanf("%d", &n);
    // int nst =n-1;
    // int nsp =1;
    // for(int i=1; i<=n; i++){
    //     printf("%d ",i);
    // }
    // for(int i=n-1 ; i>=1; i--){
    //     printf("%d ", i);
    // }
    // printf("\n");
    // for(int i=1 ; i<=n; i++){
    //     int a=1;
    //     for(int j=1; j<=nst; j++){
    //         printf("%d ",a);
    //     a++;
    //     }
    //     for(int k=1; k<=nsp; k++){
    //         printf("  ");
    //     a++;
    //     }
    //     int l=nst;
    //     for(int j=1; j<=nst ; j++){
    //        printf("%d ", l );
    //     l--;
    //     }
    //     nst--;
    //     nsp+=2;
    //     printf("\n");
    // }


    int n=4;
    int nst=n-1;
    int a=nst ;
    for(int i=1; i<=nst ; i++){
        int l=nst;
        for(int j=1; j<=a ; j++){
           printf("%d ", l );
        l--;
        }
        a--;
        printf("\n");
    }


    return 0;
}