#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        char tier;
    } pokemon;
    typedef struct legendary
    {
        pokemon basic;
        char ability[10];
    } legendary;
    struct godpokemon
    {
        legendary legend;
        char special[10];
    } arceus;
    arceus.legend.basic.hp = 100;
    strcpy(arceus.special, "Haguuu");
    
    legendary mewtwo;
    mewtwo.basic.hp = 100;
    mewtwo.basic.speed = 200;
    strcpy(mewtwo.ability, "Blast");

    printf("Ability -%s\nHp %d \nSpeed - %d", mewtwo.ability, mewtwo.basic.hp, mewtwo.basic.speed);
    printf("Arceus - %s\n", arceus.special);

    return 0;
}