#include "pociski.h"
bool pocisk::czy_znika(){
    return (x-srednica>okno_x2||y-srednica>okno_y2||x+srednica<okno_x||y+srednica<okno_y);
}
void pocisk::petla(){
    ruch();
    rysuj();
}
void pocisk::rysuj(){
    window.draw(pp);
}
void petla_pociskow(){
    for (std::list<pocisk*>::iterator pociskii = pociski.begin(); pociskii != pociski.end(); pociskii++){
        (*pociskii)->petla();
        if((*pociskii)->czy_znika()){//usuwa pociski
            delete *pociskii;
            pociski.erase(pociskii--);
        }
    }
}
