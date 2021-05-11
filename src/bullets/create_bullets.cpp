#include "bullets.h"

void stwoz_pocisk_prosty(float x,float y,float kat,float szybkosc,float srednica){
    bullets.push_back(new pocisk_prosty(x,y,kat,szybkosc,srednica));
}
