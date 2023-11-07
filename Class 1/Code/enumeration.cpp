#include <iostream>

int main()
{
    enum GAMEMODE
    {
        MAINMENU,
        ABOUT,
        INSTRUCTIONS,
        EXIT
    };
    std::cout << MAINMENU << std::endl;
    std::cout << ABOUT << std::endl;
    return 0;
}