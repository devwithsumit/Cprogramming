#include<stdio.h>
int main(){
    int a,b;
    char c;
    printf("Enter the Operation : ");
    scanf("%d",&a);
    scanf("%c",&c);
    scanf("%d",&b);
    switch(c){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%.2f",(float)a/b);
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}