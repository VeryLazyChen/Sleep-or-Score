#ifndef MAP_H
#define MAP_H
#include"obstacle.h"
#include"road.h"
#include <QPaintEvent>
#include<QKeyEvent>
#include<fstream>
#include<string>
#include<iostream>
#include"mission.h"
#include"monster.h"
#define _stop 1
#define _mission 2
#defint _monster 3
class Map
{
public:
    Map(std::string path);
    Map(){}
    void setMap( void* sg, int num_sg, string typeset);
    ~Map();
    void addmission(Mission& msn);
    void addevent(Event& e);
    void show(QPainter &painter);
    bool ifObstacle(int X, int Y, int movement);
    void setmmp(int set[][2]);
private:
    Obstacle *sights;
    string name;
    int num_sg;
    int level;
    QImage background;
    Road road;
    pair<string,Mission> *missionlist;
    pair<string,Monster> *monsterlist;
    int mmp[totalwidth][totalheight];
    //list<mission> missionlist;
    //list<monster> monsterlist;
    //moveobstacle bus;
};

#endif // MAP_H
