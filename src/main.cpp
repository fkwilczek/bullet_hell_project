#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <list>
#include "pociski/pociski.h"

sf::RenderWindow window(sf::VideoMode(690, 900), "SFML works!", sf::Style::Default);
int okno_x=0,okno_y=0,okno_x2=window.getSize().x,okno_y2=window.getSize().y;
std::list<pocisk*> pociski;

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
        for(int i=0;i<2;i++)
            stwoz_pocisk_prosty(window.getSize().x/2,window.getSize().x/2,(rand()*361/RAND_MAX),rand()%10+1,5);
        petla_pociskow();
        window.display();
        window.clear();

    }

    return 0;
}
