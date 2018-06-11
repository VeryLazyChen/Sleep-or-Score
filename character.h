#ifndef CHARACTER_H
#define CHARACTER_H
#include "player.h"
#include "rpgobj.h"

class Character : public Player,public RPGObj
{
public:
    Character(){}
    ~Character();
    void rankUP();                      //升级函数
    void inicharacter();                 //
private:
    int rank;                           //等级
    double exp;double fullexp;          //经验
    double power;double fullpower;      //能量
};

#endif // CHARACTER_H
