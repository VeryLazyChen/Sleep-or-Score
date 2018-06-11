#include "road.h"


Road::Road(std::string&Path, int posX, int posY, double length, int width)
    :path(Path), posX(posX), posY(posY), length(length), width(width)
{
    char* kkk=new char [path.length()+1];
    std::strcpy (kkk, path.c_str());
    bool a=image.load(kkk);
    oneoflength=image.width();
}
void Road::show(QPainter &painter, bool vertical){
    QImage New_img=image.scaled(length,width);
    if(vertical){
        QTransform transform;
        transform.rotate(90.0);
        painter.drawImage(posX,posY,New_img.transformed(transform),0,0,width,length);
    }
    else
        painter.drawImage(posX, posY, New_img,0,0,length, width);
}
