#include "players.h"

move_keyboard_handler::move_keyboard_handler(sf::Keyboard::Key up,sf::Keyboard::Key down,sf::Keyboard::Key left,sf::Keyboard::Key right){
    this->up=up;
    this->down=down;
    this->left=left;
    this->right=right;
}
sf::Vector2f move_keyboard_handler::get_vector(){
    bool is_up=sf::Keyboard::isKeyPressed(up),is_down=sf::Keyboard::isKeyPressed(down),is_left=sf::Keyboard::isKeyPressed(left),is_right=sf::Keyboard::isKeyPressed(right);
    //pls make this code better
    if(first_x==0){
        if(is_right){
            acceleration_x=1;
            first_x=1;
        }else if(is_left){
            acceleration_x=-1;
            first_x=-1;
        }
    }else if(first_x==-1){
        if(is_right){
            acceleration_x=1;
            if(!is_left)
                first_x=1;
        }else if(!is_left){
            first_x=0;
            acceleration_x=0;
        }else
            acceleration_x=-1;
    }else{
        if(is_left){
            acceleration_x=-1;
            if(!is_right)
                first_x=-1;
        }else if(!is_right){
            first_x=0;
            acceleration_x=0;
        }else
            acceleration_x=1;
    }

    if(first_y==0){
        if(is_down){
            acceleration_y=1;
            first_y=1;
        }else if(is_up){
            acceleration_y=-1;
            first_y=-1;
        }
    }else if(first_y==-1){
        if(is_down){
            acceleration_y=1;
            if(!is_up)
                first_y=1;
        }else if(!is_up){
            first_y=0;
            acceleration_y=0;
        }else
            acceleration_y=-1;
    }else{
        if(is_up){
            acceleration_y=-1;
            if(!is_down)
                first_y=-1;
        }else if(!is_down){
            first_y=0;
            acceleration_y=0;
        }else
            acceleration_y=1;
    }
    if(acceleration_x==0)
        return sf::Vector2f(0,acceleration_y);
    else if(acceleration_y==0)
        return sf::Vector2f(acceleration_x,0);
    else
        return sf::Vector2f(0.70710678118*acceleration_x,acceleration_y*0.70710678118);
}