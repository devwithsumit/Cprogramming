#include<stdio.h>
#include<string.h>
typedef float real;
typedef int integer;
typedef struct contruct;
int main(){
    struct car{
        char name[10];
        int speed;
        float mileage;
    }Dzire;
    {
        stpcpy(Dzire.name,"Swift");
        Dzire.speed = 140;
        Dzire.mileage = 20.4;
    };

    printf("%s\n",Dzire.name);
    printf("%d\n",Dzire.speed);
    printf("%.2f\n",Dzire.mileage);

    struct person{
        char name[10];
        int salary;
        int age;
    } devraj;
    struct person sumit;
    {
    stpcpy(sumit.name,"Sumit");
    sumit.salary = 0;
    sumit.age = 19;
    };
    {
        strcpy(devraj.name,"devraj");

    }
    printf("Name %s\nSalary - %d\nAge - %d",sumit.name,sumit.salary,sumit.age);
    printf("\nName - %s",devraj.name);
    integer a = 0;
    return 0;
}