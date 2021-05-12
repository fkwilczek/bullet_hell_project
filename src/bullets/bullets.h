#include <list>
#include <math.h>
#include <SFML/Graphics.hpp>
#include <iostream>

extern sf::RenderWindow window;
extern int border_x,border_y,border_x2,border_y2;
class bullet{
protected:
    float speed,size,x,y;
    sf::Sprite sprite;
    virtual void draw();
public:
    virtual void move()=0;
    virtual bool is_disappearing();
    virtual void loop();
};
extern std::list<bullet*> bullets;
class basic_bullet: public bullet{
protected:
    float angle,acceleration_x,acceleration_y;
public:
    basic_bullet(float x,float y,sf::Texture &texture,float angle,float speed,float scale);
    virtual void move();
};

void create_basic_bullet(float x,float y,sf::Texture &texture,float angle,float speed,float scale);
void bullets_loop();
