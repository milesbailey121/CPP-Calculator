#pragma once
#include <SFML/Graphics.hpp>

class Screen
{
private:
    sf::Text equation;
    sf::Font font;
    sf::RectangleShape display;
    void updateTextPosition();
public:
    Screen();
    void drawTo(sf::RenderWindow& window);
    void updateEquation(sf::String text);
};

