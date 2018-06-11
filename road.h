#ifndef ROAD_H
#define ROAD_H
#include<QString>
#include<string>
#include<QPainter>
#include<QImage>
#include<QMatrix>
#include<QTransform>
#include"obstacle.h"
#include <QPaintEvent>
class Road
{
public:
    Road(std::string &Path, int posX, int posY, double length,int width);
    Road(){}
    void show(QPainter &painter, bool vertical=false);
private:
    std::string path;
    QImage image;
    int posX, posY;
    double width, length;
    double oneoflength;
};

#endif // ROAD_H
