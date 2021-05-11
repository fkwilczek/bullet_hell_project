#include "bullets.h"
bool bullet::czy_znika(){
    return (x-srednica>border_x2||y-srednica>border_y2||x+srednica<border_x||y+srednica<border_y);
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
