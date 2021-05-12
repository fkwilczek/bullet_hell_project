#include "bullets.h"
#include <iostream>
basic_bullet::basic_bullet(float x,float y,sf::Texture &texture,float angle,float speed,float scale=1){
    this->speed=speed;
    this->x=x;
    this->y=y;
    this->angle=angle;
    size=texture.getSize().x*scale;
    sprite.setTexture(texture);
    sprite.setScale(scale,scale);
    sprite.setPosition(x,y);
    acceleration_x=sin(angle*0.0174533)*sqrt(speed);
    acceleration_y=cos(angle*0.0174533)*sqrt(speed);
}

void basic_bullet::move(){
    x+=acceleration_x;
    y+=acceleration_y;
    sprite.setPosition(x,y);
}


