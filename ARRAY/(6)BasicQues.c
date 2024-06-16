#include<stdio.h>
#include<limits.h>
//1.Increament the even indexed value by 10 and 
//& Change the odd indexed value to its second multiple
int main(){
    int a[5] = {1,2,3,4,5};
    for(int i = 0 ; i<5 ; i++){
        if(i%2==0){
            a[i] = a[i] + 10;
        } 
        else {
            a[i] = a[i]*2;
    }
        printf("%d ", a[i]);
    }
    return 0;
}

//2.Count the number of elements in given array 
//which are  greater than a given number x.*/
// int main(){
//     int a[5] = {1,2,3,4,5};
//     int x =3, count = 0;
//     for(int i = 0 ; i<5 ; i++){
//         if(a[i]>x){
//             count++;
//         }
//     }
//         printf("%d elements are greater than %d", count,x);
//     return 0;
// }

//3*Find the diff. b/w the sum of elements at even indices
//to the sum of elements at odd indices*/
// int main(){
//     int a[4] = {4,3,4,3}; //Even 4+4 = 8 odd 3+3 = 6
//     int x =3;
//     int sumEven = 0;
//     int sumOdd = 0;
//     for(int i = 0 ; i<4 ; i++){
//         if(i%2==0){
//             sumEven += a[i];
//         }
//         else{
//             sumOdd += a[i];
//         }
//     }
//     int diff = sumEven-sumOdd;
//     printf("The difference is %d", diff); //Ans should be 8-6=2
//     return 0;
// }

/*4.Find the total number of pairs in the Array
whose sum is equal to the given value x*/
// int main(){
//     int a[8] = {1,2,3,4,5,6,7,8};
//     int x =10;
//     int count = 0;
//     for(int i = 0 ; i<8 ; i++){
//         for(int j=i+1 ; j<8 ; j++){
//             if(a[i]+a[j] == x){
//             count++;
//             printf("(%d,%d)\n",a[i],a[j]);
//             }
//         }
//     }
//     printf("%d Pairs ", count);
//     return 0;
// }

/*5.Find the total number of Triplets
whose sum is equal to the given value x*/
// int main(){
//     int a[8] = {1,2,3,4,5,6,7,8};
//     int x = 10;
//     int count = 0;
//     for(int i = 0 ; i<8 ; i++){
//         for(int j=i+1 ; j<8 ; j++){
//             for(int k = j+1 ; k<8 ; k++){
//             if(a[i]+a[j]+a[k] == x){
//             count++;
//             printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
//             }
//             }
//         }
//     }
//     printf("%d triplets ", count);
//     return 0;
// }

//6.Find Second** Largest element of array
// int main(){
//     int a[3] = {1,2,3};
//     int max= a[0];
//     int smax = a[0];
//     for(int i=0; i<3 ; i++){
//         if(max<a[i]) max= a[i];
//     }
//     for(int i=0; i<3 ; i++){
//         if(a[i]!=max && smax<a[i]) smax= a[i];
//     }
//     printf("%d", smax);
//     return 0;
// }

//Orr
// int main(){
//     int a[3] = {1,2,3};
//     int max= INT_MIN;
//     int smax = INT_MIN;
//     for(int i=0; i<3 ; i++){
//         if(max<a[i]) {
//             smax = max;
//             max= a[i];
//             }
//         else if(smax < a[i] && max!=a[i]){
//                 smax = a[i];
//             }
//         }
//     printf("%d", smax);
//     return 0;
// }
