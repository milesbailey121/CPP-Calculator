#include <D:\GitHub\CPP-Calculator\src\UI\UIBuilder.h>
#include <D:\GitHub\CPP-Calculator\src\Constants.h>
#include <D:\GitHub\CPP-Calculator\src\UI\Assets\Screen.h>
UIBuilder::UIBuilder(){
    //Screen self-builds within Screen class, no need for create function
    createButtons();
}

void UIBuilder::createButtons() {
    // Calculate grid dimensions based on window size
    const int numColumns = 4;
    const int numRows = 6;
    const float buttonSpacing = 2;
    const float buttonWidth = Constants::WINDOW_WIDTH / numColumns;
    const float totalHeight = Constants::WINDOW_HEIGHT * 0.7f;
    const float buttonHeight = totalHeight / numRows;

    // Start placing buttons at the top of the bottom 70% of the screen
    const float startX = 0;
    const float startY = Constants::WINDOW_HEIGHT * 0.3f;

    // Create the buttons
    buttons.emplace_back(std::make_unique<Button>("%",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX, startY), 42));

    buttons.emplace_back(std::make_unique<Button>("CE",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + buttonWidth + buttonSpacing, startY), 42));

    buttons.emplace_back(std::make_unique<Button>("C",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 2 * (buttonWidth + buttonSpacing), startY), 42));

    buttons.emplace_back(std::make_unique<Button>("DEL",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 3 * (buttonWidth + buttonSpacing), startY), 42));

    buttons.emplace_back(std::make_unique<Button>("1/x",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX, startY + buttonHeight + buttonSpacing), 42));

    buttons.emplace_back(std::make_unique<Button>(sf::String(L"x\u00B2"),
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + buttonWidth + buttonSpacing, startY + buttonHeight + buttonSpacing), 42));

    
    buttons.emplace_back(std::make_unique<Button>("sqrt",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 2 * (buttonWidth + buttonSpacing), startY + buttonHeight + buttonSpacing), 42));

    buttons.emplace_back(std::make_unique<Button>(sf::String(L"\u00F7"),
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 3 * (buttonWidth + buttonSpacing), startY + buttonHeight + buttonSpacing), 42));

    buttons.emplace_back(std::make_unique<Button>("7",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX, startY + 2 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("8",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + buttonWidth + buttonSpacing, startY + 2 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("9",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 2 * (buttonWidth + buttonSpacing), startY + 2 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>(sf::String(L"\u00D7"),
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 3 * (buttonWidth + buttonSpacing), startY + 2 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("4",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX, startY + 3 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("5",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + buttonWidth + buttonSpacing, startY + 3 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("6",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 2 * (buttonWidth + buttonSpacing), startY + 3 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("-",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 3 * (buttonWidth + buttonSpacing), startY + 3 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("1",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX, startY + 4 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("2",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + buttonWidth + buttonSpacing, startY + 4 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("3",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 2 * (buttonWidth + buttonSpacing), startY + 4 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("+",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 3 * (buttonWidth + buttonSpacing), startY + 4 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("+/-",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX, startY + 5 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("0",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + buttonWidth + buttonSpacing, startY + 5 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>(".",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 2 * (buttonWidth + buttonSpacing), startY + 5 * (buttonHeight + buttonSpacing)), 42));

    buttons.emplace_back(std::make_unique<Button>("=",
        sf::Vector2f(buttonWidth, buttonHeight),
        sf::Vector2f(startX + 3 * (buttonWidth + buttonSpacing), startY + 5 * (buttonHeight + buttonSpacing)), 42));
}




