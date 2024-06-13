#include<stdio.h>
int main (){
        //linear search
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];
    int flag= -1 ;
    for(int i=0; i<n; i++){
        printf("Enter element %d :", i+1);
        scanf("%d", &a[i]);
    }
    int find;
    printf("Enter element you want :");
    scanf("%d", &find);
    for(int i=0; i<n ; i++){
        if(find==a[i]){
        flag = i ;
        break;
        }
    }
    if(flag!=-1){
        printf("%d found at %d ",find, flag+1);
    }
    else{
        printf("-1");
    }

    
    return 0;
}