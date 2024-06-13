#include<stdio.h>
// int main(){
//     int a[5]= { 1,2,3,4,5};
//     int len = sizeof(a)/sizeof(int);
//     int b[len];
//     for(int i=0; i<len; i++){
//         b[i]=a[(len-1)-i];
//     }
//     for(int i=0; i<len; i++){
//         printf("%d ",b[i]);
//     }
//     return 0;
// }

//without using another array
// void reverse(int n[]){
//     int i =0;
//     int j=4;
//     while(i<=j){
//         int temp = n[i];
//         n[i] = n[j];
//         n[j] = temp;
//         i++;
//         j--;
//     }
//     //with For loop
//     // for(int i=0,j=4; i<=j; i++,j--){
//     //     int temp = n[i];
//     //     n[i] = n[j];
//     //     n[j] = temp;
//     // }
//     return;
// }
// int main(){
//     int a[5]= { 1,2,3,4,5};
//     int len = sizeof(a)/sizeof(int);
//     reverse(a);
//     for(int i=0; i<len; i++){
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

