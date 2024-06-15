#include<stdio.h>
int main(){
    // FILE* ptr = fopen("sumit.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr) != NULL){
    //     printf("%s",str);
    // }
    FILE* ptr = fopen("coding.txt","w");
    char str[] = "Placement toh lagegi";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}