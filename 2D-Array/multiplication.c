#include<stdio.h>
int main(){
    int a[3][2]= {{1,2},{3,4},{5,6}};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(a[0])/sizeof(a[0][0]);
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int p = sizeof(b) / sizeof(b[0]);
    int q = sizeof(b[0])/sizeof(b[0][0]);
    if(n!=p){
        printf("Can't mbe multiplied because n and p do not match");
        return 0;
    }
    for(int i=0; i<m;i++){
        for(int j=0;j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<p;i++){
        for(int j=0;j<q; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    int res[m][q];
    //multiplying
    for(int i=0; i<m;i++){
        for(int j=0;j<q; j++){
            res[i][j] = 0;
            for(int k=0; k<n; k++){
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication\n");
    for(int i=0; i<m;i++){
        for(int j=0;j<q; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}