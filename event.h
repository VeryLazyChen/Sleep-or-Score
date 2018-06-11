#ifndef EVENT_H
#define EVENT_H
#include<iostream>
#include<string>
#include<QMainWindow>
#include<QRect>
#include<QBrush>
class oneEvent
{
public:
    oneEvent();
    oneEvent(std::string name, int num_info, std::string* info, int cycle, int posX=0, int posY=0);
    virtual ~oneEvent();
    int getX(){return posX;}
    int getY(){return posY;}
    int getcycle(){return cycle;}
    virtual void show(QPainter* painter);
protected:
    int posX, posY;
    std::string name;
    std::string info;
    int cycle;
};
class oneget: public oneEvent{

};
class onetalk: public oneEvent{

};
class onelose: public oneEvent{

};

#endif // EVENT_H
