#include<stdio.h>
#include<string.h>
// Reverse of a String
int main(){
    char a[20];
    puts("Enter Name :");
    scanf("%[^\n]s",a);
    puts("The reverse is ");
    puts(a);
    int size = 0;
    int i=0;
    while(a[i]!='\0'){
        size++;
        i++;
    }
    for(int i=0 , j=size-1; i<=j ; i++,j--){
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    puts(a);
    return 0;
}

//pushing a character in a string
// int main(){
//     char str[] = "College";
//     int size = sizeof(str);
//     for(int i=6; i>=2; i--){
//         str[i+1]= str[i];
//     }
//     str[2]='g';
//     printf("%s",str);
//     return 0;
// }