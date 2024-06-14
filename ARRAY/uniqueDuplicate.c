#include <stdio.h>
#include <stdbool.h>
// int main(){
//     int a[6] = {1,2,5,7,5,7};
//     for(int i=0; i<6; i++){
//         for(int j=i+1;j<6 ;j++){
//             if(a[i]==a[j]){
//                 printf("%d is duplicate\n",a[i]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// Unique Element
int main(){
    int a[5] = {2, 1, 4, 1, 2};
    for (int i = 0; i < 5; i++){
        bool flag = false;
        int check;
        for (int j = i+1; j < 5; j++){
            if (a[i] == a[j])
            {   
                flag = true;
                break;
            }
        }
        if (flag == false){
            check = a[i];
            printf("%d is Unique\n", check);
            break;
        }
    }
    return 0;
}
