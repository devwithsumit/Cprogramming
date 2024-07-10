#include <stdio.h>
//print numbers n to 1 using recursion;
// int decrease(int n){ //with Void function
//     if (n <= 0) return 1;
//     printf("%d\n", n);
//     return decrease(n - 1);
// }
// // void decrease(int n){ //with Void function
// //     if(n==0) return;
// //     printf("%d\n", n);
// //     decrease(n - 1);
// //     return ;
// // }
// int main(){
//     int n = 5;
//     // printf("Enter n : ");
//     // scanf("%d", &n);
//     decrease(n);
//     return 0;
// }

//Print numbers 1 to n;
// void increase(int n){
//     if (n<=0) return; /*
//     when the value is fully decreased to 0
//     then printf function with start printing 
//     */
//     increase(n-1); //decreasing the value
//     printf("%d\n", n);
//     return ;
// }
// int main(){
//     int n = 5;
//     increase(n);
//     return 0;
// }

//Print n to 1 and 1 to n;
// void de_increase(int n){ 
//     if (n <= 0) return;
//     printf("%d\n", n);
//     de_increase(n - 1);
//     printf("%d\n", n);
//     return ;
// }
// int main(){
//     int n = 5;
//     // printf("Enter n : ");
//     // scanf("%d", &n);
//     de_increase(n);
//     return 0;
// }

// //Print sum of n to 1
// void sum(int n , int s){
//     if(n<=0) {
//     printf("%d\n", s);
//     return;
//     }
//     s += n;
//     sum(n - 1, s);
//     return ;
// }
// int main(){
//     int n = 5;
//     // printf("Enter n : ");
//     // scanf("%d", &n);
//     sum(n , 0);
//     return 0;
// }

//Print sum of n to 1 (return type)
// int sum(int n){
//     if(n <=1) {
//         printf("%d", n);
//         return 1;
//     };
//     printf("%d + ", n);
//     return n+sum(n-1);
// }
// int main(){
//     int n = 5;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     printf(" = %d\n", sum(n));
//     return 0;
// }

//Calculate A raised to the power B
// int power(int a, int b){
//     if(b==0){
//         return 1;
//     }
//     return a*power(a,b-1);
// }
// int main(){
//     int a = 2 , b= 3; // 2*2*2
//     printf("%d\n", power(a,b));
//     return 0;
// }

//power A raised to B
int powerlog(int a, int b){
    if(b == 0) return 1;
    int x = powerlog(a,b/2);
    if(b%2 == 0){
        return x*x;
    }
    else{
        return x*x*a;
    }
}
int main(){
    int a = 2 , b = 8; // 2*2*2
    printf("%d\n", powerlog(a,b));
    return 0;
}

//nth fibonacci number
// int fibo(int n){
//     if(n==1 || n == 2) return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     // //fiboancci series using for loop
//     // int n =  5;
//     // int a = 0;
//     // int b = 1;
//     // int sum = 0;
//     // for(int i = 1 ; i <= n ; i++){
//     //     sum = a + b;
//     //     b=a;
//     //     a=sum;
//     //     printf("%d ", sum);
//     // }
//     int n = 5;
//     printf("Enter nth fibonacci number : ");
//     scanf("%d", &n);
//     printf("%d", fibo(n));
//     return 0;
// }
