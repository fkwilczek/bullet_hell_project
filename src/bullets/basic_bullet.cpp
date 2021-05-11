#include "bullets.h"

basic_bullet::basic_bullet(float x,float y,float angle,float speed,float size){
    this->speed=speed;
    this->x=x;
    this->y=y;
    this->angle=angle;
    this->size=size;
    pp.setRadius(size);
    pp.setFillColor(sf::Color::Red);
    pp.setPosition(x,y);
    acceleration_x=sin(angle*0.0174533)*sqrt(speed);
    acceleration_y=cos(angle*0.0174533)*sqrt(speed);
}

void basic_bullet::move(){
    x+=acceleration_x;
    y+=acceleration_y;
    pp.setPosition(x,y);
}


