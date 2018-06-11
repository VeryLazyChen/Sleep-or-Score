#include "bullet.h"


void Bullet::move(int direction, int steps){
    switch (direction){
        case 1:

            this->_pos_y -= steps;
            if(_pos_y> 17||_pos_y<0)   _pos_y += steps;
            break;
        case 2:
            this->_pos_y += steps;
            if(_pos_y>17||_pos_y<0)   _pos_y -= steps;
            break;
        case 3:
            this->_pos_x -= steps;
            if(_pos_x>24||_pos_x<0)   _pos_x += steps;
            break;
        case 4:
            this->_pos_x += steps;
            if(_pos_x>24||_pos_x<0)   _pos_x -= steps;
            break;
    }
}
