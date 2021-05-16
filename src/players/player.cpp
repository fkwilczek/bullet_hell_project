#include "players.h"

player::player(float x, float y, sf::Texture &texture, float speed, float hitbox_size, float scale, int max_hp, move_handler *move){
    this->x=x;
    this->y=y;
    this->speed=speed;
    this->hitbox_size=hitbox_size;
    this->max_hp=max_hp;
    this->move=move;
    sprite.setTexture(texture);
    sprite.setPosition(x,y);
    sprite.setScale(scale,scale);

}
player::~player(){
    delete(move);
}
void player::draw(){
    window.draw(sprite);
}
void player::control(){
    sf::Vector2f move_xy=move->get_vector();
    x+=move_xy.x*speed;
    y+=move_xy.y*speed;

    sprite.setPosition(x,y);
}