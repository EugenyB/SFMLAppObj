#include <SFML/Graphics.hpp>
#include "Figure.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");

    Figure f;
    f.shapes();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape) //key
                    window.close();
                if (event.key.code == sf::Keyboard::R) {
                    f.changeColor();
                }
            }
        }
        f.draw(&window);
    }

    return 0;
}