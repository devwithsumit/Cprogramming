#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int* ptr = malloc(100*sizeof(int));
    int* p = ptr;
    for(int i=0; i<n; i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    for(int i=1; i<=n; i++){
        printf("%d ",*p);
        p++;
    }

    return 0;
}