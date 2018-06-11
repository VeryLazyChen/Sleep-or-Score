#include "rpgobj.h"
#include <iostream>
#include "bullet.h"

void RPGObj::initObj(string type,string route)                  //route是取材路径
{
    //TODO 所支持的对象类型应定义为枚举
    if (type.compare("player")==0){
        this->dir=1;
    }
    else if (type.compare("stone")==0){
        this->dir=1;
    }
    else if (type.compare("fruit")==0){
        this->dir=1;
    }
    else{
        //TODO 应由专门的错误日志文件记录
        cout<<"invalid ICON type."<<endl;
        return;
    }

    this->_icon = ICON::findICON(type);
    QImage all;
    const char * outt=route.c_str();
    all.load(outt);
    this->_pic = all.copy(QRect(_icon.getSrcX()*ICON::GRID_SIZE, _icon.getSrcY()*ICON::GRID_SIZE, _icon.getWidth()*ICON::GRID_SIZE, _icon.getHeight()*ICON::GRID_SIZE));

}

void RPGObj::show(QPainter * pa){
    int gSize = ICON::GRID_SIZE;
    pa->drawImage(this->_pos_x*gSize,this->_pos_y*gSize,this->_pic);
}


