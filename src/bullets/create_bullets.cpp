#include "bullets.h"

void create_basic_bullet(float x,float y,sf::Texture &texture,float angle,float speed,float scale){
    bullets.push_back(new basic_bullet(x,y,texture,angle,speed,scale));
}
