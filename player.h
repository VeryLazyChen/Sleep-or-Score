#ifndef PLAYER_H
#define PLAYER_H
#include <QImage>
#include <QPainter>
#include "rpgobj.h"
#include <vector>
#include <string>
#include <QImage>
#include <QPainter>
#include "icon.h"
#include <fstream>
#include <iostream>
#include "bullet.h"
using namespace std;

class Player:public RPGObj
{
public:
    Player(){}
    ~Player(){}
    void iniplayer();                           //人物初始化
    void move(int direction, int steps=1);      //direction =1,2,3,4 for 上下左右
    void setary(int Q[30][30],int a);        //设置此处的位置标记为某个值（map里可以有个二维数组，例如0表示空，1表示石头，2表示怪物，3表示人，4表示回血等
    void showinfo(QPainter * pa);       //展示血条的函数
    void attack();                      //攻击函数
    vector<Bullet> bius;                //子弹容器
protected:
    //对于人物而言
    double blood;double fullblood;      //血量 满血
    int attack_power;                   //攻击力

};

#endif // PLAYER_H
