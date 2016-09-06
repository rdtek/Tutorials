#include <windows.h>
#include <stdio.h>
#include <iostream>

void setFontSize(int FontSize)
{
    CONSOLE_FONT_INFOEX info = { 0 };
    info.cbSize = sizeof(info);
    info.dwFontSize.Y = FontSize; // leave X as zero
    info.FontWeight = FW_NORMAL;
    wcscpy(info.FaceName, L"Lucida Console");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

/* main - Program entry point.*/
int main()
{
    int font_size = 12;
    int close = 0;

    std::cout << "\nConsole font example.\n";
    std::cout << "\nPlease enter a font size (12, 14, 16, 18...):\n";
    std::cin >> font_size;
    
    setFontSize(font_size);
    //If a valid font size was entered, the console font size should change

    //Close program after key press.
    system("pause");

    return 0;
}

