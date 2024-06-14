#include<stdio.h>
//sum
// int main(){
//     int  a[3]= {1,2,3};
//     int sum =0;
//     for(int i = 0; i<3; i++){
//         sum += a[i];
//     }
//     printf("%d ", sum);
//     return 0;
// }

//product
int main(){
    int  a[3]= {1,2,4};
    int sum =1;
    for(int i = 0; i<3; i++){
        sum = sum*a[i];
    }
    printf("product is %d\n", sum);
    return 0;
}