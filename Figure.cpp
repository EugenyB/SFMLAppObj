//
// Created by eberk on 27.10.2019.
//

#include "Figure.h"


void Figure::draw(sf::RenderWindow * window) {
    window->clear();
    window->draw(*shape);
    window->draw(line, 2, sf::Lines);
    window->display();
}

void Figure::shapes() {
    shape = new sf::CircleShape(50.f);
    shape->setPosition(50,50);
    shape -> setFillColor(sf::Color::Green);
    line[0].position = sf::Vector2f(0, 0);
    line[0].color  = sf::Color::Red;
    line[1].position = sf::Vector2f(200, 200);
    line[1].color = sf::Color::Blue;
}

void Figure::changeColor() {
    shape->setFillColor(sf::Color::Red);
}
