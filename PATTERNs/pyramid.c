#include <stdio.h>
int main()
{

    int n = 5;
    // printf("Enter n : ");
    // scanf("%d", &n);
    int nsp = n - 1; // no. of spaces
    int nst = 1;     // no. of stars
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        nsp--;
        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }
        nst = nst + 2;
        printf("\n");
    }

    // int n = 4;
    // // printf("Enter n : ");
    // // scanf("%d", &n);
    // int nsp = n - 1; // no. of spaces
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= nsp; k++)
    //     {
    //         printf("  ");
    //     }
    //     nsp--;
    //     for (int j = 1; j <= a ; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     a= a+2;
    //     printf("\n");
    // }

    // int n = 4;
    // // printf("Enter n : ");
    // // scanf("%d", &n);
    // int nsp = n - 1; // no. of spaces
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= nsp; k++)
    //     {
    //         printf("  ");
    //     }
    //     nsp--;
    //     int ch = 65;
    //     for (int j = 1; j <= a; j++)
    //     {
    //         printf("%c ", ch);
    //         ch++;
    //     }
    //     a = a + 2;
    //     printf("\n");
    // }

    //     int n = 4;
    // // printf("Enter n : ");
    // // scanf("%d", &n);
    // int nsp = n - 1; // no. of spaces
    // int a = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     // for (int k = 1; k <= nsp; k++)
    //     // {
    //     //     printf("  ");
    //     // }
    //     // nsp--;
    //     for (int j = 1; j <= a; j++)
    //     {
    //         printf("%d ", j);
    //     }
    //     a = a + 1;
    //     printf("\n");
    // }

    // int n = 4;
    // printf("Enter n : ");
    // scanf("%d", &n);
    // int nsp = n - 1; // no. of spaces
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= nsp; k++){// for giving spaces
    //         printf("  ");
    //     }
    //     nsp--;
    //     for (int j = 1; j <= i ; j++){// number triangle
    //         printf("%d ", j);
    //     }
    //     int z = i-1;
    //     for(int l=1; l<=i-1; l++){ // Extra numbers at the end
    //     printf("%d ", z);
    //     z--;
    //     }
    //     printf("\n");
    // }

    //  int n = 4; // Same question with Type casting
    // // printf("Enter n : ");
    // // scanf("%d", &n);
    // int nsp = n - 1; // no. of spaces
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = 1; k <= nsp; k++)
    //     {
    //         printf("  ");
    //     }
    //     nsp--;
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         printf("%c ", j+64);
    //     }
    //     int z = i-1;
    //     for(int l=1; l<=i-1; l++){
    //     printf("%c ", z+64);
    //     z--;
    //     }
    //     printf("\n");
    // }

    // int n = 7;
    // // printf("Enter n : ");
    // // scanf("%d", &n);
    // int nsp = n - 1;
    // int nst = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= nsp; j++) // spaces
    //     {
    //         printf("  ");
    //     }
    //     for (int k = 1; k <= nst; k++)
    //     {
    //         printf("* ");
    //     }
    //     if (i<=n/2)
    //     {
    //         nsp--;
    //         nst += 2;
    //     }
    //     else{ // i > n/2 = i > 4 (No. of rows)
    //         nsp++;
    //         nst -=2;
    //     }
    //     printf("\n");
    // }


    // int n = 4;
    // // printf("Enter n : ");
    // // scanf("%d", &n);
    // int nsp = 0;
    // int nst = n ;
    // for (int i = 1; i <= n; i++)
    // {
    //     for(int q=1 ; q<=nst; q++){
    //         printf("* ");
    //     }
    //     for (int j = 1; j <= nsp; j++)
    //     {
    //         printf("  ");
    //     }
    //     for (int j = 1; j <= nsp; j++)
    //     {
    //         printf("  ");
    //     }
    //     for (int k = 1; k <= nst; k++)
    //     {
    //         printf("* ");
    //     }
    //     nsp++; 
    //     nst--;
    //     printf("\n");
    // }

    return 0;
}