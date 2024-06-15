//***IMP Structures are passed by value
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct pokemon{
        int hp;
        int speed;
        char tier;
    }pokemon;
void change(pokemon p){
    p.tier = 'B';
    p.speed = 100;
    p.hp = 100;
    return;
}
int main(){
    pokemon mewtwo;
    mewtwo.hp = 130;
    mewtwo.speed = 240;
    mewtwo.tier = 'A';
    change(mewtwo);
    pokemon* m = &mewtwo;
    printf("Tier - %c\nHp %d \nSpeed - %d",mewtwo.tier,mewtwo.hp,mewtwo.speed);

    return 0;
}