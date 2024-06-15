#include <stdio.h>
#include <stdlib.h>

int main()
{
    // system("clear");

    for (int i = 1 ; i <=10 ; i++)
    {
        printf("%i Hello World\n ", i);
    }

    // Q.1  print all even numbers from 1 to 100
    //  for (int i = 2; i <=100 ; i=i+2)
    //  {
    //       printf("%i \n ", i);
    //  }

    // 0r
    //  for (int i = 1; i <=100 ; i++)
    // {
    //      if (i%2==0) printf("%i ", i);
    // }

    //  Q print all odd numbers from 1 to 100
    //      for (int i = 1; i <=100 ; i++)
    // {
    //      if (i%2!=0) printf("%i ", i);
    // }

    // Q.2 table of 19
    //  for (int i = 19 ; i <=190 ; i=i+19)
    //  {
    //      printf("%i ", i);
    //  }

    // table of n
    // int n;
    // printf(" enter a number :");
    // scanf("%d", &n);
    // for (int i = n ; i <=10*n ; i=i+n)
    // {
    //     printf("%i ", i);
    // }

    // Q.3 Display an AP- 1,3,5,7,9... upto 'n' terms
    //  int n;
    //  printf("enter number of terms :");
    //  scanf("%d",&n);
    //  for (int i = 1 ; i <=2*n-1; i=i+2)/*An = 2n-1 by formula*/
    //  {
    //      printf("%i ", i);
    //  }

    // Q.4 Display an AP- 4,7,10,13,16... upto 'n' terms
    //  int n;
    //  printf("enter number of terms :");
    //  scanf("%d", &n);
    //  for (int i = 4; i <= 3 * n + 1; i = i + 3) /*An = 3n+1 by formula*/
    //  {
    //      printf("%i ", i);
    //  }

    // without formula
    // int n;
    // printf("enter number of terms :");
    // scanf("%d", &n);
    // int a=4; //starting term of AP
    // for (int i = 1 ; i <=n; i++)
    // {
    //     printf("%i ", a); a=a+3;  //3 is the common difference
    // }

    // Q.5 Display GP - 1,2,4,8,16,32,... up to nth terms
    // int n;
    // printf("enter number of terms :");
    // scanf("%d", &n);
    // int a = 1;
    // for (int i = 0; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     a = a * 2;
    // }

    // GP - 100,97,94,... up to all positive terms
    // int a = 100;
    // for (int i = 1; a > 0; i++)
    // {
    //     printf("%d ", a);
    //     a = a - 3;
    // }

    // GP - 100,50,25,.. up to 'n' trms
    // int n;
    // printf("enter number of terms :");
    // scanf("%d", &n);
    // float a = 100;
    // for (int i = 1; i <=n; i++)
    // {
    //     printf("%.2f ", a);
    //     a = a/2;
    // }

    //6 to check whether a number is prime or composite
    // int n;
    // printf("enter a number :");
    // scanf("%d", &n);
    // int a=0;
    // for(int i=2; i<=n/2; i++){
    //     if(n%i==0){
    //     a=1;
    //     break;
    //     }
    // }
    // if(n==1) printf("the number is neither prime nor composite");
    // else if(a==0) printf("the number is prime\n");
    // else printf("the number is composite");

    //7 printing of odd numbers by continue statement
    // for(int i=1; i<=100; i++){
    //      if(i%2==0)
    //      continue; //continue means skip the current round of the loop
    //      printf("%i ", i);
    // }

    // printing alphabets with their ASCII values
    //  for(int i = 65 ; i<=90; i++){
    //      char ch = (char)i;
    //      printf("%c -> ", ch);
    //      printf("%d\n", i);
    //  }

    //8 WAP to print Armstrong number between 1 to 500
//    for(int j=2; j<=500; j++){
//      int n = j;
//     int a = n;
//     int sum = 0;
//     while (n >0)
//     {
//         int rem;
//         rem = n % 10;
//         int cube = rem * rem * rem;
//         sum = sum + cube;
//         n = n / 10;
//     }
//     if(a==sum) 
//     printf("%d ", j);
//    }

    return 0;
}
