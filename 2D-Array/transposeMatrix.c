#include<stdio.h>
#include<limits.h>
// int main(){
//     int a[2][3]= {{4,6,2},{9,3,1 }};
//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(a[0]) / sizeof(a[0][0]);
//     int b[m][n];
//     for(int i=0; i<n;i++){
//         for(int j=0;j<m; j++){
//             printf("%d ", a[i][j]);
//             b[j][i] = a[i][j];
//         }
//         printf("\n");
//     }
//     printf("Transpose\n");
//     for(int i=0; i<m;i++){
//         for(int j=0;j<n; j++){
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Change the current matrix to its transpose of n x n matrix
// int main(){
//     int a[3][3]= {{3,6,1},{4,6,2},{9,3,1}};
//     int n = sizeof(a) / sizeof(a[0]);
//     for(int i=0; i<n;i++){
//         for(int j=0;j<n; j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     //swapping loop
//     for(int i=0; i<n;i++){
//         for(int j=i;j<n; j++){// j =i to stop the reswapping of same elements
//             int temp = a[i][j];
//             a[i][j] = a[j][i];
//             a[j][i] = temp;
//         }
//     }
//     printf("Transposed A\n");
//     for(int i=0; i<n;i++){
//         for(int j=0;j<n; j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//rotate a matrix to 90 deg
int main(){
    int a[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int n = sizeof(a) / sizeof(a[0]);
    for(int i=0; i<n;i++){
        for(int j=0;j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<n;i++){
        for(int j=i;j<n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0, k=n-1; j<k; j++, k--){
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
        }
    }
    
    printf("90° rotated A\n");
    for(int i=0; i<n;i++){
        for(int j=0;j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}