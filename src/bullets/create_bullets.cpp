#include "bullets.h"

void create_basic_bullet(float x,float y,float angle,float speed,float size){
    bullets.push_back(new basic_bullet(x,y,angle,speed,size));
}
