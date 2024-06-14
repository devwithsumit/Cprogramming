#include<stdio.h>
// Max of Array
int main(){
    int a[3] = {1,2,3};
    int max= a[0];
    for(int i=0; i<3 ; i++){
        if(max<a[i]) max= a[i];
    }
    printf("%d", max);
    return 0;
}

// MIn of Array
// int main(){
//     int a[3] = {1,2,3};
//     int min= a[0];
//     for(int i=0; i<3 ; i++){
//         if(a[i]<min) min= a[i];
//     }
//     printf("%d", min);
//     return 0;
// }