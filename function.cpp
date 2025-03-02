#include "function.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines)
{
    system("GreedySnake");
    char cmd[30];
    sprintf_s(cmd, "mode con cols=%d lines=%d", cols * 2, lines);
    system(cmd);
}

void SetCursorPosition(const int x, const int y)
{
    COORD position;
    position.X = x * 2;
    position.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void SetColor(int colorID)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

void SetBackColor()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_RED |
        BACKGROUND_BLUE |
        BACKGROUND_GREEN |
        BACKGROUND_RED);
}
