#include "character.h"
#include "player.h"

void Character::inicharacter()
{
    rank=1;
    fullblood=100;
    fullpower=100;
    fullexp=100;
    attack_power=0;                         //初始攻击力为0  碰见诺诺加10
    blood=fullblood;
    power=fullpower;
    exp=0;
}


void Character::rankUP()                   //升级
{
    rank+=1;
    fullblood+=20;
    fullpower+=10;
    fullexp+=30;
    attack_power+=5;
    blood=fullblood;
    power=fullpower;
}
