#include <stdio.h>

//reverse of odd rows
// int main()
// {
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int n = sizeof(a) / sizeof(a[0]);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Wave Print\n");
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d ", a[i][j]);
//             }
//         }
//         else
//         {
//             for (int j = n - 1; j >= 0; j--)
//             {
//                 printf("%d ", a[i][j]);
//             }
//         }
//         // printf("\n");
//     }
//     return 0;
// }

//wavePrint - 2

int main(){
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Wave Print - 2\n");
    for (int j = 0; j < n; j++)
    {
            if(j%2==0){
                for(int i=n-1; i >=0 ; i--){
                    printf("%d ", a[i][j]);
                }
            }
            else{
                for(int i = 0; i < n; i++){
                    printf("%d ", a[i][j]);
                }
            }
        // printf("\n");
    }
    return 0;
}