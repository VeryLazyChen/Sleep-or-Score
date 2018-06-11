#include "event.h"

oneEvent::oneEvent(std::string name, std::string info, int cycle, int posX, int posY)
    :name(name),cycle(cycle),posX(posX),posY(posY)
{
    this->info=info;
}
oneEvent::~oneEvent(){delete info;}
void oneEvent::show(QPainter &painter){
    QRect dialogue(0,totalheight*2/3,totalwidth,totalheight/3);
    painter.drawRect(dialogue);
    painter.fillRect(dialogue,QBrush(Qt::yellow));
    painter.setpen(Qt::red);
    painter.drawText(dialogue，Qt::AlignHCenter,tr(info));
}
