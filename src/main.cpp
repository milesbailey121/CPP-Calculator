#include <SFML/Graphics.hpp>
#include <D:\GitHub\CPP-Calculator\src\UI\Assets\Button.h>
#include <D:\GitHub\CPP-Calculator\src\UI\Assets\RoundedRectangle.h>
#include <D:\GitHub\CPP-Calculator\src\UI\UIBuilder.h>
#include <D:\GitHub\CPP-Calculator\src\Constants.h>

using namespace Constants;

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SFML works!");

    
    UIBuilder UI;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    if (event.key.code == sf::Keyboard::Escape) {
                        window.close();
                    }
                    break;
                default:
                    break;
            }
        }
    for (auto& button : UI.getButtons()) {
        if (button->isPressed()) {
            if (button->getText() == "+") {
                std::cout << "Addition button pressed!\n";
            } else if (button->getText() == "-") {
                std::cout << "Subtraction button pressed!\n";
            } else if (button->getText() == "x") {
                std::cout << "Multiplication button pressed!\n";
            } else if (button->getText() == "/") {
                std::cout << "Division button pressed!\n";
            } else if (button->getText() == "=") {
                std::cout << "Equals button pressed!\n";
            } else if (button->getText() == "CE") {
                std::cout << "Clear Entry button pressed!\n";
            } else if (button->getText() == "C") {
                std::cout << "Clear button pressed!\n";
            } else if (button->getText() == "DEL") {
                std::cout << "Delete button pressed!\n";
            } else if (button->getText() == "+/-") {
                std::cout << "Plus/Minus button pressed!\n";
            } else if (button->getText() == ".") {
                std::cout << "Decimal button pressed!\n";
            } else if (button->getText() == "1/x") {
                std::cout << "Reciprocal button pressed!\n";
            } else if (button->getText() == "sqrt") {
                std::cout << "Square Root button pressed!\n";
            } else if (button->getText() == "%") {
                std::cout << "Percentage button pressed!\n";
            } else {
                // Assuming all remaining buttons are numbers
                std::cout << "Number button " << button->getText() << " pressed!\n";
            }
        }
    }


        window.clear();
        for (auto& button : UI.getButtons()) {
            button->drawTo(window);
            button->logic(window);
        }
        window.display();
    }

    return 0;
}

