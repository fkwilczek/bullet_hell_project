#include "bullets.h"

pocisk_prosty::pocisk_prosty(float xx,float yy,float katt,float szybkoscc,float srednicaa){
    szybkosc=szybkoscc;
    x=xx;
    y=yy;
    kat=katt;
    srednica=srednicaa;
    pp.setRadius(srednicaa);
    pp.setFillColor(sf::Color::Red);
    pp.setPosition(x,y);
    akceleracja_x=sin(kat*0.0174533)*sqrt(szybkosc);
    akceleracja_y=cos(kat*0.0174533)*sqrt(szybkosc);
}

void pocisk_prosty::ruch(){
    x+=akceleracja_x;
    y+=akceleracja_y;
    pp.setPosition(x,y);
}


