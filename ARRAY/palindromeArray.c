#include <stdio.h>
void palindrome(int n[]){
    int flag=1;
    for(int i =0,j=4; i<=j;i++,j--){
                if(n[i]!=n[j]){
                printf("No\n");
                flag=2;
                break;
            }
    }
    if(flag==1){
        printf("Yes its palindrome\n");
    }
    for(int i =0,j=4; i<=j;i++,j--){
            int temp = n[i];
            n[i]=n[j];
            n[j]=temp;
    }
    return;
}
int main()
{
    int a[5] = {3,2,1,2,3};
    int len = sizeof(a) / sizeof(int);
    int i = len;
    int j = len - 1;
    palindrome(a);
    for(int i=0; i<5; i++){
        printf("%d,", a[i]);
    }
    return 0;
}