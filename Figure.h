//
// Created by eberk on 27.10.2019.
//
#include <SFML/Graphics.hpp>

#ifndef SFMLAPP_FIGURE_H
#define SFMLAPP_FIGURE_H

class Figure {
    sf::CircleShape * shape;
    sf::Vertex line[2];
public:
    void shapes();
    void draw(sf::RenderWindow * window);

    void changeColor();
};


#endif //SFMLAPP_FIGURE_H
