#ifndef RPGOBJ_H
#define RPGOBJ_H
#include <QImage>
#include <QPainter>
#include <string>
#include <icon.h>
#include <map>
using namespace std;
class RPGObj
{
public:
    RPGObj(){}

    void initObj(string type,string route);             //初始化
    void show(QPainter * painter);

    void setPosX(int x){this->_pos_x=x;}                //位置
    void setPosY(int y){this->_pos_y=y;}

    void setdir(int Dir){this->dir=Dir;}                //方向
    int getdir(){return this->dir;}

    int getPosX() const{return this->_pos_x;}
    int getPosY() const{return this->_pos_y;}
    int getHeight() const{return this->_icon.getHeight();}
    int getWidth() const{return this->_icon.getWidth();}
    string getObjType() const{return this->_icon.getTypeName();}//返回类名

protected:

protected:
    //所有坐标，单位均为游戏中的格
    QTimer *time4;
    QImage _pic;
    int _pos_x, _pos_y;                 //该物体在游戏中当前位置（左上角坐标）
    ICON _icon;                         //可以从ICON中获取对象的素材，尺寸等信息
    int dir;                            //1，2，3，4表示上下左右  因为Bullet要用到dir

};

#endif // RPGOBJ_H
