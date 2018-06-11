#include "player.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <QPainter>
#include <string>
#include <QPainter>
#include "bullet.h"


#include <QPaintEvent>
using namespace std;



//direction =1,2,3,4 for 上下左右


void Player::iniplayer()
{
   /* rank=1;
    fullblood=100;
    fullpower=100;
    fullexp=100;
    attack_power=0;                         //初始攻击力为0  碰见诺诺加10
    blood=fullblood;
    power=fullpower;
    exp=0;*/
}

void Player::showinfo(QPainter *pa)
{


    pa->setPen(Qt::black); //添加画笔
    pa->drawRect(this->getPosX()*32-16, this->getPosY()*32-16, 64, 16); //绘制矩形
    pa->setBrush(Qt::red); //添加画刷
    pa->drawRect(this->getPosX()*32-16, this->getPosY()*32-16, 64*(blood/100), 16); //绘制矩形
    pa->setBrush(Qt::NoBrush);

}

void Player::move(int direction, int steps){
    switch (direction){
        case 1:

            this->_pos_y -= steps;
            if(_pos_y> 17||_pos_y<0)   _pos_y += steps;
            break;
        case 2:
            this->_pos_y += steps;
            if(_pos_y>17||_pos_y<0)   _pos_y -= steps;
            break;
        case 3:
            this->_pos_x -= steps;
            if(_pos_x>24||_pos_x<0)   _pos_x += steps;
            break;
        case 4:
            this->_pos_x += steps;
            if(_pos_x>24||_pos_x<0)   _pos_x -= steps;
            break;
    }
}

void Player::setary(int Q[30][30],int a)                //设置world数组元素
{
    Q[this->getPosX()][this->getPosY()+1]=a;
}

void Player::attack()
{
  /*  Bullet Biu;
    Biu.initObj("biu","取材路径");
    Biu.setdir(this->getdir());                         //玩家此时的方向
    Biu.setPosX(this->getPosX());                       //设置子弹初始位置
    Biu.setPosY(this->getPosY());
    Biu.inibullet(_player.getPosX(),_player.getPosY());     //压入容器
    _biu.push_back(bius); */

}


