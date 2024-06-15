#include <stdio.h>
#include <stdlib.h>
int main()
{
    // system("clear");
    // int x=5,y,z;
    // y=--x;//first decreament then use
    // z=x--;//first use then decreament
    // printf(" %d %d %d \n", x,y,z);
    
    1.
    int x=4, y=0, z;
    while(x>=0){
        if(x==y)
        break;
        else
        printf("\n %d %d", x,y);
        x--;
        y++;
    }

    // 2.
    // int n;
    // printf("enter a number :");
    // scanf("%d", &n);
    // int sum = 0;
    // int a = 0;//last digit variable
    // while (n != 0)
    // {
    //     a = n % 10;
    //     sum= sum+a;
    //     n=n/10;
    // }
    // printf("sum of the digits are %d\n", sum);

    // 3
    //  int n;
    // printf("enter a number :");
    // scanf("%d", &n);
    // int sum = 0;
    // int a = 0;//last digit variable
    // while (n != 0)
    // {
    //     // printf("%d ", n);
    //     if(n%2==0) {
    //     a = n % 10;
    //     sum= sum+a;
    //     }
    //     n=n/10;
    // }
    // printf("sum of the even digits are %d\n", sum);

    // 4
    //  int n;
    // printf("enter a number :");
    // scanf("%d", &n);
    // int sum = 0;
    // int a = 0;//last digit variable
    // while (n != 0)
    // {
    //     // printf("%d ", n);
    //     if(n%2!=0) {
    //     a = n % 10;
    //     sum= sum+a;
    //     }
    //     n=n/10;
    // }
    // printf("sum of the odd digits are %d\n", sum);

    // 5
    // int n;
    // printf("enter a number :");
    // scanf("%d", &n);
    // int r = 0;
    // while (n > 0)
    // {
    //     //    int a = n % 10;//last digit variable
    //     r = r * 10 + (n % 10);
    //     n = n / 10;
    // }
    // printf("reverse of the given number is %d\n", r);

    // Q.6 1-2+3-4+5-6...
    // int n;
    // printf("enter no of terms :");
    // scanf("%d", &n);
    // int sum = 0;
    // int a = 1;
    // while (a <= n)
    // {
    //     if (a % 2 != 0)
    //     {
    //         printf(" +%d ", +a);
    //         sum = sum + a;
    //     }
    //     else{
    //         printf("%d ", -a);
    //         sum = sum - a;
    //     }
    //     a++;
    // }
    // printf("\nsum is %d\n", sum);

    return 0;
}
