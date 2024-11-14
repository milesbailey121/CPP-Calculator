#include <D:\GitHub\CPP-Calculator\src\UI\Assets\Screen.h>
#include <D:\GitHub\CPP-Calculator\src\Constants.h>
#include <iostream>

Screen::Screen(){
    if (!font.loadFromFile("../src/UI/Assets/arial-unicode-ms-regular.ttf")) {
        std::cout << "Error loading font\n";
    }
    
    equation.setFillColor(sf::Color::White);
    equation.setCharacterSize(56);
    equation.setFont(font);

    display.setSize(sf::Vector2f(Constants::WINDOW_WIDTH,(Constants::WINDOW_HEIGHT * 0.3)));
    display.setFillColor(sf::Color::Black);
    display.setPosition(Constants::WINDOW_WIDTH, Constants::WINDOW_HEIGHT);
}

void Screen::updateEquation(sf::String text) {
    equation.setString(text);
    updateTextPosition();
}

void Screen::drawTo(sf::RenderWindow& window) {
    window.draw(display);
    window.draw(equation);
}

void Screen::updateTextPosition() {
    // Center the text horizontally and vertically within the button
    // Get the local bounds of the text
    sf::FloatRect textBounds = equation.getLocalBounds();

    // Center the text within the button
    equation.setPosition(
        display.getPosition().x + (display.getSize().x - textBounds.width) / 2.0f - textBounds.left,
        display.getPosition().y + (display.getSize().y - textBounds.height) / 2.0f - textBounds.top
    );
}
