#pragma once

#include <D:\GitHub\CPP-Calculator\src\UI\Assets\Button.h>
#include <D:\GitHub\CPP-Calculator\src\UI\Assets\Screen.h>
#include <D:\GitHub\CPP-Calculator\src\Constants.h>

class UIBuilder
{
private:
    std::vector<std::unique_ptr<Button>> buttons;
    Screen display;
    void createScreen();
    void createButtons();
public:
    UIBuilder();
    std::vector<std::unique_ptr<Button>>& getButtons() { return buttons; }
    Screen getScreen() { return display; }
};
