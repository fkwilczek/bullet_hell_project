#include "bullets.h"
bool bullet::is_disappearing(){
    return (x-size>border_x2||y-size>border_y2||x+size<border_x||y+size<border_y);
}
void bullet::loop(){
    draw();
}
void bullet::draw(){
    window.draw(sprite);
}
void bullets_loop(){
    for (std::list<bullet*>::iterator bullet_iterator = bullets.begin(); bullet_iterator != bullets.end(); bullet_iterator++){
        (*bullet_iterator)->loop();
        (*bullet_iterator)->move();
        if((*bullet_iterator)->is_disappearing()){
            delete *bullet_iterator;
            bullets.erase(bullet_iterator--);
        }
    }
}
