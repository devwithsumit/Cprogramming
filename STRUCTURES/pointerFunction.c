#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Create a structure 'person' having attributes as age and weight .
//*-> Access its structure variables using pointers.
typedef struct person{
        int age,weight;
        char name[10];
    }person;
void fun(person* p){
    strcpy(p->name,"HOLAA");
    p->age = 25;
    p->weight = 70;
    // or 
    (*p).weight = 75;
    return;
}
int main(){
    
    person a = {19,60,"Sumit"};
    person b = {17,60,"Rupesh"};
    person* x = &a;
    printf("\n%s\n",a.name);
    printf("%d\n",a.age);
    printf("%d\n",a.weight);
    fun(x);
    printf("\n%s\n",a.name);
    printf("%d\n",a.age);
    printf("%d\n",a.weight);
    return 0;
}

//chech the output
// struct book {
//     char name[25];
//     char author[25];
//     int callno;
// };
// void display(struct book *);
// int main(){
//     struct book b1={"Lets us C","YPk",101};
//     display(&b1);
//     return 0;
// }
// void display(struct book* b){
//     printf("%s %s %d\n",b->name,b->author,b->callno);
// }