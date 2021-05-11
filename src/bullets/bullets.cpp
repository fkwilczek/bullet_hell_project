#include "bullets.h"
bool bullet::czy_znika(){
    return (x-size>border_x2||y-size>border_y2||x+size<border_x||y+size<border_y);
}
void bullet::petla(){
    rysuj();
}
void bullet::rysuj(){
    window.draw(pp);
}
void bullets_loop(){
    for (std::list<bullet*>::iterator pociskii = bullets.begin(); pociskii != bullets.end(); pociskii++){
        (*pociskii)->petla();
        (*pociskii)->ruch();
        if((*pociskii)->czy_znika()){
            delete *pociskii;
            bullets.erase(pociskii--);
        }
    }
}
