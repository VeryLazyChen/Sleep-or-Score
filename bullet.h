#ifndef BULLET_H
#define BULLET_H
#include "rpgobj.h"


class Bullet:public RPGObj
{
public:
    Bullet(){}
    void inibullet(int x,int y){inix=x;iniy=y;distance=8;s=0;}       //初始化子弹

    void sets(int S){this->s=S;}
    int gets(){return this->s;}

    void setinix(int x){inix=x;}
    int getinix(){return inix;}

    void setiniy(int y){iniy=y;}
    int getiniy(){return iniy;}

    void move(int Dir,int steps);
    bool collision(int Q[30][30])   { if(Q[this->getPosX()][this->getPosY()]!=0) return false;else return true;  }

    int getdistance(){return distance;}
protected:
    int inix,iniy;          //初始坐标
    int s;                  //距离发出点的距离
    int distance;           //攻击距离
};

#endif // BULLET_H
