#include <list>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <iostream>

extern sf::RenderWindow window;
extern int border_x,border_y,border_x2,border_y2;
class bullet{
protected:
    float szybkosc,srednica,x,y;
    sf::CircleShape pp;
public:
    virtual void ruch()=0;
    virtual bool czy_znika();
    virtual void petla();
    virtual void rysuj();
};

class pocisk_prosty: public bullet{
protected:
    float kat,akceleracja_x,akceleracja_y;
public:
    pocisk_prosty(float=0,float=0,float=0,float=1,float=1);
    virtual void ruch();
};

extern std::list<bullet*> bullets;
void stwoz_pocisk_prosty(float,float,float,float,float);
void bullets_loop();
