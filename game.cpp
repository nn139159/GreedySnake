#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "game.h"
#include "interface.h"
#include "snake.h"
#include "food.h"
#include "function.h"

void Game::Start()
{
    SetWindowSize(41, 32);
    SetColor(9);
    Interface* start = new Interface();
    start->Startinterface();
    start->PrintText();
    delete start;

    SetCursorPosition(13, 26);
    std::cout << "Press any key to start... ";
    SetCursorPosition(13, 27);
    system("pause");
}

void Game::Select()
{
    SetCursorPosition(13, 26);
    std::cout << "                          ";
    SetCursorPosition(13, 27);
    std::cout << "                          ";
    SetCursorPosition(6, 21);
    SetColor(4);
    std::cout << "Select Level:";
    SetCursorPosition(27, 22);
    SetBackColor();
    std::cout << "Easy";
    SetCursorPosition(27, 24);
    SetColor(3);
    std::cout << "Medium";
    SetCursorPosition(27, 26);
    std::cout << "Hard";
    SetCursorPosition(27, 28);
    std::cout << "Chaos";
    SetCursorPosition(0, 31);
    score = 0;

    int ch;
    key = 1;
    bool flag = false;
    while ((ch = _getch()))
    {
        switch (ch)
        {
        case 72:case 119:case 87:
            if (key > 1)
            {
                switch (key)
                {
                case 2:
                    SetCursorPosition(27, 22);
                    SetBackColor();
                    std::cout << "Easy";

                    SetCursorPosition(27, 24);
                    SetColor(3);
                    std::cout << "Medium";

                    --key;
                    break;
                case 3:
                    SetCursorPosition(27, 24);
                    SetBackColor();
                    std::cout << "Medium";

                    SetCursorPosition(27, 26);
                    SetColor(3);
                    std::cout << "Hard";

                    --key;
                    break;
                case 4:
                    SetCursorPosition(27, 26);
                    SetBackColor();
                    std::cout << "Hard";

                    SetCursorPosition(27, 28);
                    SetColor(3);
                    std::cout << "Chaos";

                    --key;
                    break;
                }
            }
            break;
        case 80:case 115:case 83:
            if (key < 4)
            {
                switch (key)
                {
                case 1:
                    SetCursorPosition(27, 24);
                    SetBackColor();
                    std::cout << "Medium";
                    SetCursorPosition(27, 22);
                    SetColor(3);
                    std::cout << "Easy";

                    ++key;
                    break;
                case 2:
                    SetCursorPosition(27, 26);
                    SetBackColor();
                    std::cout << "Hard";
                    SetCursorPosition(27, 24);
                    SetColor(3);
                    std::cout << "Medium";

                    ++key;
                    break;
                case 3:
                    SetCursorPosition(27, 28);
                    SetBackColor();
                    std::cout << "Chaos";
                    SetCursorPosition(27, 26);
                    SetColor(3);
                    std::cout << "Hard";

                    ++key;
                    break;
                }
            }
            break;
        case 13://Enter
            flag = true;
            break;
        default:
            break;
        }
        if (flag) break;

        SetCursorPosition(0, 31);
    }

    switch (key)
    {
    case 1:
        speed = 200;
        break;
    case 2:
        speed = 100;
        break;
    case 3:
        speed = 50;
        break;
    case 4:
        speed = 10;
        break;
    default:
        break;
    }
}

void Game::Draw()
{
    system("cls");

    SetColor(8);
    Interface* map = new Interface();
    map->Initmap();
    map->Printmap();
    delete map;

    SetColor(15);
    SetCursorPosition(33, 5);
    std::cout << "GREEDY SNAKE";
    SetCursorPosition(32, 8);
    std::cout << "LEVEL ¡G";
    SetCursorPosition(36, 9);
    SetColor(11);
    switch (key)
    {
    case 1:
        std::cout << "Easy";
        break;
    case 2:
        std::cout << "Medium";
        break;
    case 3:
        std::cout << "Hard";
        break;
    case 4:
        std::cout << "Chaos";
        break;
    default:
        break;
    }
    SetCursorPosition(32, 12);
    SetColor(15);
    std::cout << "SCORE ¡G";
    SetCursorPosition(37, 12);
    SetColor(11);
    std::cout << "     0";
    SetColor(15);
    SetCursorPosition(33, 15);
    std::cout << " ESC to stop";
}

int Game::Play()
{
    Snake* gsnake = new Snake();
    Food* newfood = new Food();
    SetColor(13);
    gsnake->Init();
    srand((unsigned)time(NULL));
    newfood->DrawFood(*gsnake);


    while (gsnake->OverEdge() && gsnake->HitItself())
    {
        if (!gsnake->ChangeDirection())
        {
            int flag = Menu();
            switch (flag)
            {
            case 1:
                break;

            case 2:
                delete gsnake;
                delete newfood;
                return 1;

            case 3:
                delete gsnake;
                delete newfood;
                return 2;

            default:
                break;
            }
        }

        if (gsnake->GetFood(*newfood))
        {
            gsnake->DrawMove();
            UpdateScore(1);
            RewriteScore();
            SpeedUp();
            newfood->DrawFood(*gsnake);
        }
        else
        {
            gsnake->Move();
        }

        if (gsnake->GetStarFood(*newfood))
        {
            gsnake->DrawMove();
            UpdateScore(5);
            RewriteScore();
        }

        if (newfood->GetStarFlag())
        {
            newfood->FlashStarFood();
        }

        Sleep(speed);
    }

    delete gsnake;
    delete newfood;
    int flag = GameOver();
    switch (flag)
    {
    case 1:
        return 1;
    case 2:
        return 2;
    default:
        return 2;
    }
}

int Game::Menu()
{
    SetColor(11);
    SetCursorPosition(32, 19);
    std::cout << "Menu¡G";
    Sleep(100);
    SetCursorPosition(34, 21);
    SetBackColor();
    std::cout << "Continue";
    Sleep(100);
    SetCursorPosition(34, 23);
    SetColor(11);
    std::cout << "Restart";
    Sleep(100);
    SetCursorPosition(34, 25);
    std::cout << "Quit";
    SetCursorPosition(0, 31);


    int ch;
    int temp_key = 1;
    bool flag = false;
    while ((ch = _getch()))
    {
        switch (ch)
        {
        case 72:case 119:case 87:
            if (temp_key > 1)
            {
                switch (temp_key)
                {
                case 2:
                    SetCursorPosition(34, 21);
                    SetBackColor();
                    std::cout << "Continue";
                    SetCursorPosition(34, 23);
                    SetColor(11);
                    std::cout << "Restart";

                    --temp_key;
                    break;
                case 3:
                    SetCursorPosition(34, 23);
                    SetBackColor();
                    std::cout << "Restart";
                    SetCursorPosition(34, 25);
                    SetColor(11);
                    std::cout << "Quit";

                    --temp_key;
                    break;
                }
            }
            break;

        case 80:case 115:case 83:
            if (temp_key < 3)
            {
                switch (temp_key)
                {
                case 1:
                    SetCursorPosition(34, 23);
                    SetBackColor();
                    std::cout << "Restart";
                    SetCursorPosition(34, 21);
                    SetColor(11);
                    std::cout << "Continue";

                    ++temp_key;
                    break;
                case 2:
                    SetCursorPosition(34, 25);
                    SetBackColor();
                    std::cout << "Quit";
                    SetCursorPosition(34, 23);
                    SetColor(11);
                    std::cout << "Restart";

                    ++temp_key;
                    break;
                }
            }
            break;

        case 13://ENTER
            flag = true;
            break;

        default:
            break;
        }

        if (flag) break;

        SetCursorPosition(0, 31);
    }

    if (temp_key == 1) //CONTINUE
    {
        SetCursorPosition(32, 19);
        std::cout << "        ";
        SetCursorPosition(34, 21);
        std::cout << "        ";
        SetCursorPosition(34, 23);
        std::cout << "        ";
        SetCursorPosition(34, 25);
        std::cout << "        ";
    }
    return temp_key;
}

void Game::SpeedUp()
{
    if (speed > 10)
    {
        speed -= 5;
        if (speed <= 10)
        {
            key = 4;
            SetCursorPosition(36, 9);
            std::cout << "          ";
            SetCursorPosition(36, 9);
            std::cout << "Chaos";
        }
        else if (speed <= 50)
        {
            key = 3;
            SetCursorPosition(36, 9);
            std::cout << "          ";
            SetCursorPosition(36, 9);
            std::cout << "Hard";
        }
        else if (speed <= 100)
        {
            key = 2;
            SetCursorPosition(36, 9);
            std::cout << "          ";
            SetCursorPosition(36, 9);
            std::cout << "Medium";
        }
    }
}

void Game::UpdateScore(const int& temp)
{
    score += key * 10 * temp;
}

void Game::RewriteScore()
{
    SetCursorPosition(37, 12);
    SetColor(11);
    int bit = 0;
    int temp = score;
    while (temp != 0)
    {
        ++bit;
        temp /= 10;
    }
    for (int i = 0; i < (6 - bit); ++i)
    {
        std::cout << " ";
    }
    std::cout << score;
}

int Game::GameOver()
{
    Sleep(500);
    SetColor(11);
    SetCursorPosition(9, 9);
    std::cout << " --------------------------------------------";
    Sleep(30);
    SetCursorPosition(9, 10);
    std::cout << " |               Game Over !!!              |";
    Sleep(30);
    SetCursorPosition(9, 11);
    std::cout << " |                                          |";
    Sleep(30);
    SetCursorPosition(9, 12);
    std::cout << " |              Your Score:                 |";
    SetCursorPosition(26, 12);
    std::cout << score;
    Sleep(30);
    SetCursorPosition(9, 13);
    std::cout << " |                                          |";
    Sleep(30);
    SetCursorPosition(9, 14);
    std::cout << " |               Play Again?                |";
    Sleep(30);
    SetCursorPosition(9, 15);
    std::cout << " |                                          |";
    Sleep(30);
    SetCursorPosition(9, 16);
    std::cout << " |                                          |";
    Sleep(30);
    SetCursorPosition(9, 17);
    std::cout << " |                                          |";
    Sleep(30);
    SetCursorPosition(9, 18);
    std::cout << " |                                          |";
    Sleep(30);
    SetCursorPosition(9, 19);
    std::cout << " --------------------------------------------";
    Sleep(30);

    SetCursorPosition(21, 18);
    std::cout << "No Thanks";
    Sleep(30);
    SetCursorPosition(16, 18);
    SetBackColor();
    std::cout << "Yes";
    SetCursorPosition(0, 31);


    int ch;
    int temp_key = 1;
    bool flag = false;
    while ((ch = _getch()))
    {
        switch (ch)
        {
        case 75:case 97:case 65://LEFT
            if (temp_key > 1)
            {
                SetCursorPosition(16, 18);
                SetBackColor();
                std::cout << "Yes";
                SetCursorPosition(21, 18);
                SetColor(11);
                std::cout << "No Thanks";
                --temp_key;
            }
            break;

        case 77:case 100:case 68://RIGHT
            if (temp_key < 2)
            {
                SetCursorPosition(21, 18);
                SetBackColor();
                std::cout << "No Thanks";
                SetCursorPosition(16, 18);
                SetColor(11);
                std::cout << "Yes";
                ++temp_key;
            }
            break;

        case 13://Enter
            flag = true;
            break;

        default:
            break;
        }

        SetCursorPosition(0, 31);
        if (flag) {
            break;
        }
    }

    SetColor(11);
    switch (temp_key)
    {
    case 1:
        return 1;//RESTART
    case 2:
        return 2;//QUIT
    default:
        return 1;
    }
}