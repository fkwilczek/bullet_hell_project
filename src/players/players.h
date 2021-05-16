#include <SFML/Graphics.hpp>
#include <vector>

extern sf::RenderWindow window;
extern int border_x,border_y,border_x2,border_y2;

class move_handler{
public:
    virtual sf::Vector2f get_vector()=0;
};

class move_keyboard_handler: public move_handler{
    sf::Keyboard::Key up,down,left,right;
    char first_x=0,first_y=0;
    char acceleration_x=0,acceleration_y=0;
public:
    move_keyboard_handler(sf::Keyboard::Key up,sf::Keyboard::Key down,sf::Keyboard::Key left,sf::Keyboard::Key right);
    virtual sf::Vector2f get_vector();
};


class player{
    float x,y,speed,hitbox_size;
    int hp,max_hp;
    move_handler *move;
    sf::Sprite sprite;
public:
    player(float x, float y, sf::Texture &texture, float speed, float hitbox_size, float scale, int max_hp, move_handler *move);
    ~player();
    void control();
    void draw();

    
};
