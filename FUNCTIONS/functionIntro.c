#include<stdio.h>
#include<math.h>
int min(int x, int y){
    if(x>y) return y;
    else return x;
}
int main(){
    printf("%d\n", min(5,6));
    int a,b;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("Enter b number ");
    scanf("%d", &b);
    a = min(a,b);
    printf("%d",a );
    return 0;
}