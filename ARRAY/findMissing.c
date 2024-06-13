#include <stdio.h>
#include <stdbool.h>
// int main(){
//     int a[5] = {1,2,3,4,5};
//     int x = 3;
//     int check;
//     bool flag = false;
//     for(int i=0; i<5; i++){
//         if(x==a[i]){
//             flag = true;
//             check = a[i];
//             break;
//         }

//     }
//     if(flag==true){
//         printf("Yes, Present at %d index\n",check);
//     }
//     else{
//         printf("Not Present");
//     }
//     return 0;
// }


//find missing number from 1 to 100;
int main()
{
    int a[100];
    int sum = 0;
    for(int i = 0; i<100;i++){
        if(i==66){
            a[i] = 0; //making 67 missing
        }
        else{
            a[i] = i+1;
        }
    }
    int actualSum = 0;
    for(int i=1; i<=100;i++){
        actualSum +=i; //to get actual sum from 1 to 100;
    }
    for(int i = 0; i<100;i++){
        // printf("%d,", a[i]);
        sum += a[i];
    }
    printf("\nmissing number is %d",actualSum-sum);
    return 0;
}
