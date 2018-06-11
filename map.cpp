#include "map.h"
Map::Map(string Path)
{
    ifstream mapfile;
    mapfile.open(Path.c_str());
    if(!mapfile.is_open())
        int i=mapfile.is_open();
    string input;
    mapfile>>input;
    while(mapfile.eof()==false){

        if(input=="name"){mapfile>>name;    }
        if(input=="level"){mapfile>>level; }
        if("num_sg"){mapfile>>num_sg; sights=new Obstacle[num_sg]; }
        if("resourcepath"){
            string path;float posX, posY; float scale;
            for(int i=0;i<num_sg;i++){
                 mapfile>>path; mapfile>>posX; posY; float scale;
                 sights[i]=Obstacle(path,posX*totalwidth,posY*totalheight, scale);
            }
        }
        if("monsterlist"){}
        if("missionlist"){}
        if("moveobstacle"){}
        mapfile>>input;
    }
    //Road road=rd;
}
void Map::setMap(void *set, int num_set, string typeset)
{
    /*if( typeset=="obstacle")*/ Obstacle* tmp=static_cast<Obstacle*>(set);
    sights=new Obstacle[num_set];

    for(int i=0;i<=num_sg;i++){
        sights[i]=tmp[i];
    }
    //Road road=rd;
}

void Map::show(QPainter &painter){
    for(int i=0;i<=num_sg;i++){                      //attention
        sights[i].show(painter);
    }
    //road.show(painter);
}
Map::~Map(){
    delete sights;
}
bool Map::ifObstacle(int X, int Y, int movement){
    if(movement==1) Y++;
    else if(movement==3) X--;
    else if(movement==2) Y--;
    else if(movement==4) X++;
    return false;
}
