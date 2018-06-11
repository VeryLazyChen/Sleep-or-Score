#ifndef MONSTER_H
#define MONSTER_H
#include "player.h"
#include "rpgobj.h"


class Monster : public Player,public RPGObj
{
public:
    Monster();
private:
    double power;double fullpower;      //能量
};

#endif // MONSTER_H
