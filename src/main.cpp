#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <list>
#include "bullets/bullets.h"

sf::RenderWindow window(sf::VideoMode(690, 900), "SFML works!", sf::Style::Default);
int border_x=0,border_y=0,border_x2=window.getSize().x,border_y2=window.getSize().y;
std::list<bullet*> bullets;

int main()
{
    window.setFramerateLimit(60);

    srand(time(NULL));
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
        }}
        for(int i=0;i<10;i++)
            create_basic_bullet(window.getSize().x/2,window.getSize().x/2,(rand()*361/RAND_MAX),rand()%10+1,5);
        bullets_loop();
        window.display();
        window.clear();

    }

    return 0;
}
