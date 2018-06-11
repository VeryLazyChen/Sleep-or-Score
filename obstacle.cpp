#include "obstacle.h"
#include<cstring>
#include<string>

Obstacle::Obstacle(std::string Path, int posx, int posy, double scale)
    :path(Path), posX(posx), posY(posy), scale(scale){
    char* kkk=new char [path.length()+1];
    std::strcpy (kkk, path.c_str());
    image.load(kkk);
    endX=posX+scale;
    endY=posY+image.height()/image.width()*scale;
}
void Obstacle::show(QPainter &painter){
    QImage New_img=image.scaled(scale,image.height()/image.width()*scale);
    painter.drawImage(posX, posY,New_img);
}
Obstacle::~Obstacle(){}
