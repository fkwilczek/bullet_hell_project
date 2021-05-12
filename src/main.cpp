#include <SFML/Graphics.hpp>
#include <list>
#include "bullets/bullets.h"
#include "functions.h"

sf::RenderWindow window(sf::VideoMode(690, 900), "SFML works!", sf::Style::Default);
int border_x=0,border_y=0,border_x2=window.getSize().x,border_y2=window.getSize().y;
std::list<bullet*> bullets;

int main()
{
    window.setFramerateLimit(60);
    rand_init();

    sf::Texture texture;
    texture.loadFromFile("test.png");

    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
        }}

        create_basic_bullet(border_x2/2,border_y2/2,texture,rand_float(0,359),rand_int(1,5),1);
        bullets_loop();
        window.display();
        window.clear();

    }

    return 0;
}
