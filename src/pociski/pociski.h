#include <list>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <iostream>

extern sf::RenderWindow window;
extern int okno_x,okno_y,okno_x2,okno_y2;
class pocisk{
protected:
    float szybkosc,srednica,x,y;
    sf::CircleShape pp;
public:
    virtual void ruch()=0;
    virtual bool czy_znika();
    virtual void petla();
    virtual void rysuj();
};

class pocisk_prosty: public pocisk{
protected:
    float kat,akceleracja_x,akceleracja_y;
public:
    pocisk_prosty(float=0,float=0,float=0,float=1,float=1);
    virtual void ruch();
};

extern std::list<pocisk*> pociski;
void stwoz_pocisk_prosty(float,float,float,float,float);
void petla_pociskow();
