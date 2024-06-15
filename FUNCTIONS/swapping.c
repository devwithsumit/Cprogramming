#include<stdio.h>
void swap(int* x, int* y){
    int c = *x;
    *x = *y;
    *y=c;
    return;
}
int main(){
    // //with third variable
    // int a=2;
    // int b=3;
    // int c=a;
    // a=b;
    // b=c;
    // printf("a is %d, b is %d",a,b);


    // //without third variable
    // int a =2;
    // int b =3;
    // a=a+b;// (a = 2+3 =5)
    // b=a-b;// b = 5-3 =2 or b = (a+b)-b = a
    // a=a-b;// a = 5-2 = 3 or a = (a+b)- a;
    // printf("a is %d, b is %d",a,b);

    int a=2;
    int b=3;
    int* x = &a;
    // int* y = &b;
    swap(&a , &b);
    int** y = &x;
    int*** z= &y;


    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("%p\n", y);
    printf("%p", z);


    return 0;
}