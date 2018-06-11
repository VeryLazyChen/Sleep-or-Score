#ifndef OBSTACLE_H
#define OBSTACLE_H
#include<string>
#include<cstring>
#include<QPainter>
#include<QString>
#include<QImage>
#include<QTransform>
#include <QPaintEvent>
const int totalwidth=2000;
const int totalheight=500;

class Obstacle
{
public:
    Obstacle(std::string Path, int posX, int posY, double scale);
    Obstacle(){}
    ~Obstacle();
    void show(QPainter &painter);
    int getposX(){return posX;}
    int getposY(){return posY;}
    double getendX(){return endX;}
    double getendY(){return endY;}
private:
    QImage image;
    std::string path;
    int posX, posY;
    double scale;
    double endX,endY;
};

class moveObstacle:public Obstacle{
public:
   // moveObstacle();
private:
    int pos_X, pos_Y;
    QImage source;
    std::string path;
};

#endif // OBSTACLE_H
