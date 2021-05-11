#include <list>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <iostream>

extern sf::RenderWindow window;
extern int border_x,border_y,border_x2,border_y2;
class bullet{
protected:
    float speed,size,x,y;
    sf::CircleShape pp;
    virtual void rysuj();
public:
    virtual void ruch()=0;
    virtual bool czy_znika();
    virtual void petla();
};

class basic_bullet: public bullet{
protected:
    float angle,acceleration_x,acceleration_y;
public:
    basic_bullet(float=0,float=0,float=0,float=1,float=1);
    virtual void ruch();
};

extern std::list<bullet*> bullets;
void create_basic_bullet(float,float,float,float,float);
void bullets_loop();
