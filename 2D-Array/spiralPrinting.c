#include <stdio.h>
// int main()
// {
//     int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(a[0]) / sizeof(a[0][0]);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Spiral Printing\n");
//     //  m = n;
//     int minr = 0;
//     int maxr = n-1;
//     int minc = 0;
//     int maxc = m-1;
//     int count = 0;
//     int tne = m*n;
//     while (count < tne){
//         // print minimun row
//         for (int j = minc; j <=maxc; j++){
//             printf("%d ", a[minr][j]);
//             count++;
//         }
//         if(count==tne) break;
//         //print the maxmimum column
//         minr++;
//         for (int i = minr; i <=maxr; i++){
//             printf("%d ", a[i][maxc]);
//             count++;
//         }
//         if(count==tne) break;
//         maxc--;
//         //print the maxmimum row
//         for (int j = maxc; j >= minc; j--){
//             printf("%d ", a[maxr][j]);
//             count++;
//         }
//         if(count==tne) break;
//         maxr--;
//         // print minimun column
//         for (int i = maxr; i >= minr; i--){
//             printf("%d ", a[i][minc]);
//             count++;
//         }
//         if(count==tne) break;
//         minc++;
//     }
//     return 0;
// }


int main()
{
    
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(a[0]) / sizeof(a[0][0]);
    int b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Spiral Printing\n");
    //  m = n;
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = m-1;
    int count = 0;
    int tne = m*n;
    while (count < tne){
        // print minimun row
        for (int j = minc; j <=maxc; j++){
            printf("%d ", a[minr][j]);
            count++;
        }
        if(count==tne) break;
        //print the maxmimum column
        minr++;
        for (int i = minr; i <=maxr; i++){
            printf("%d ", a[i][maxc]);
            count++;
        }
        if(count==tne) break;
        maxc--;
        //print the maxmimum row
        for (int j = maxc; j >= minc; j--){
            printf("%d ", a[maxr][j]);
            count++;
        }
        if(count==tne) break;
        maxr--;
        // print minimun column
        for (int i = maxr; i >= minr; i--){
            printf("%d ", a[i][minc]);
            count++;
        }
        if(count==tne) break;
        minc++;
    }
    return 0;
}