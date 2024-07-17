#include<stdio.h>
//*-> only one member can be accessed used at time
union person{
    char name[10];
    int age ;
    int weight;
}a;
int main(){
    // union person a = {"sumit"};
    a.age = 90;
    a.weight  =0;
    printf("%s\n",a.name);
    printf("%d",a.age);
    printf("\n%d",a.weight);
    return 0;
}