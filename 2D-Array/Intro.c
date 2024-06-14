#include<stdio.h>
#include<limits.h>
//store roll number and marks obtained side by side
//of n no. of students let n = 4;
// int main(){
//     int n = 2 ;
//     printf("Enter no. of Students :");
//     scanf("%d", &n);
//     int a[n][2];
//     for(int i=0; i<n;i++){
//         for(int j=0;j<2; j++){
//             if(j%2==0){
//                 printf("Enter Roll no. :");
//                 scanf("%d",&a[i][j]);
//             }
//             else{
//                 printf("Enter Marks : ");
//                 scanf("%d",&a[i][j]);
//             }
//         }
//     }
//     printf("\n");
//     printf("Students Roll no. Marks\n");
//     for(int i=0; i<n;i++){
//         printf("%d\t  ",i+1);
//         for(int j=0;j<2; j++){
//             // scanf("%d",&a[i][j]);
//             printf("%d\t   ",a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Store 10 at every index of 5*5 2d array or matrix
// int main(){
//     int n = 5;
//     int x = 10;
//     int a[n][n];
//     for(int i=0; i<n;i++){
//         for(int j=0;j<n; j++){
//             printf("%d ",x);
//         }
//         printf("\n");
//     }
// }

//Add two matrices
// int main(){
//     int n =2;
//     int a[2][2]= {{3,2},{3,2}};
//     int b[2][2]= {{3,2},{3,2}};
//     for(int i=0; i<2;i++){
//         for(int j=0;j<2; j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("+\n");
//     for(int i=0; i<2;i++){
//         for(int j=0;j<2; j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("=\n");
//     for(int i=0; i<2;i++){
//         for(int j=0;j<2; j++){
//             printf("%d ",a[i][j]+b[i][j]);
//         }
//         printf("\n");
//     }
// }

//sum of all elements of matrix n x m;
// int main(){
//     int n =2;
//     int m =2;
//     printf("Enter no. of rows : ");
//     scanf("%d", &n);
//     printf("Enter no. of columns : ");
//     scanf("%d", &m);
//     int a[n][m];
//       for(int i=0; i<n;i++){
//         for(int j=0;j<m; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int sum = 0;
//     for(int i=0; i<n;i++){
//         for(int j=0;j<m; j++){
//             sum +=a[i][j];
//         }
//         printf("\n");
//     }
//     printf("Sum is %d", sum);
// }

//Maximun of a matrix;
// #include<limits.h>
// int main(){
//     int a[2][2]= {{1,6},{3,5}};
//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(a[0]) / sizeof(a[0][0]);
//     int max = INT_MIN;
//     int min = INT_MAX;
//     int maxr,maxc;
//     int minr, minc;
//       for(int i=0; i<n;i++){
//         for(int j=0;j<m; j++){
//             if(max<a[i][j]){
//                 max = a[i][j];
//                 maxr= i;
//                 maxc= j;
//             }
//             if(min>a[i][j]){
//                 min = a[i][j];
//                 minr= i;
//                 minc= j;
//             }
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("%d is minimum at {%d,%d}\n%d is maximum at {%d,%d}\n", min,minr,minc,max,maxr, maxc);
//     return 0;
// }


//Tell row no. with max sum of elements
// int main(){
//     int a[3][2]= {{1,6},{3,5},{2,4}};
//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(a[0]) / sizeof(a[0][0]);
//     int maxSum = INT_MIN;
//     int row;
//       for(int i=0; i<n;i++){
//         int sum = 0;
//         for(int j=0;j<m; j++){
//             printf("%d ", a[i][j]);
//             sum += a[i][j];
//         }
//         if(maxSum<sum){
//             maxSum = sum;
//             row = i+1;
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("%d is maximum sum of %d row",maxSum,row);
//     return 0;
// }

//Find row with maximum number of 1's
//in the maxtrix having only 0 and 1.
// int main(){
//     int a[3][4]= {{1,0,1,0},{1,0,1,1},{0,1,0,0}};
//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(a[0]) / sizeof(a[0][0]);
//     int maxCount = INT_MIN;
//     int row;
//       for(int i=0; i<n;i++){
//         int count = 0; 
//         for(int j=0;j<m; j++){
//             printf("%d ", a[i][j]);
//             if(a[i][j]==1){
//             count ++;
//             }
//         }
//         if(maxCount<count){
//             maxCount = count;
//             row = i+1;
//         }
//         printf("\n");
//     }
//     printf("%d row is having maximum 1",row);

//     return 0;
// }