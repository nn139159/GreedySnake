// GreedySnake.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include "game.h"
int main()
{
    Game G;
    G.Start();
    while (true)
    {
        G.Select();
        G.Draw();
        int temp = G.Play();
        if (temp == 1)
        {
            system("cls");
            G.Start();
            continue;
        }
        else if (temp == 2)
        {
            break;
        }
        else
        {
            break;
        }
    }
    return 0;
}

