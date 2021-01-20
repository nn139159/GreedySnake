#include "snake.h"
#include <conio.h>
#include <iostream>
#include "function.h"

void Snake::Init()
{
    for (auto& point : snake)
    {
        point.PrintCircular();
    }
}

void Snake::DrawMove()
{
    switch (direction)
    {
    case Direction::UP:
        snake.emplace_back(Point(snake.back().GetX(), snake.back().GetY() - 1));
        break;
    case Direction::DOWN:
        snake.emplace_back(Point(snake.back().GetX(), snake.back().GetY() + 1));
        break;
    case Direction::LEFT:
        snake.emplace_back(Point(snake.back().GetX() - 1, snake.back().GetY()));
        break;
    case Direction::RIGHT:
        snake.emplace_back(Point(snake.back().GetX() + 1, snake.back().GetY()));
        break;
    default:
        break;
    }
    SetColor(13);
    snake.back().PrintCircular();
}

void Snake::Move()
{
    DrawMove();
    snake.front().Clear();
    snake.pop_front();
}

bool Snake::OverEdge()
{
    return snake.back().GetX() < 30 && snake.back().GetY() < 30 && snake.back().GetX() > 1 && snake.back().GetY() > 1;
}

bool Snake::HitItself()
{
    std::deque<Point>::size_type count = 1;
    Point* head = new Point(snake.back().GetX(), snake.back().GetY());
    for (auto& point : snake)
    {
        if (!(point == *head))
            ++count;
        else
            break;
    }
    delete head;
    if (count == snake.size())
        return true;
    else
        return false;
}

bool Snake::ChangeDirection()
{
    char ch;
    if (_kbhit())
    {
        ch = _getch();
        switch (ch)
        {
        case -32:
            ch = _getch();
            switch (ch)
            {
            case 72:
                if (direction != Direction::DOWN)
                    direction = Direction::UP;
                break;
            case 80:
                if (direction != Direction::UP)
                    direction = Direction::DOWN;
                break;
            case 75:
                if (direction != Direction::RIGHT)
                    direction = Direction::LEFT;
                break;
            case 77:
                if (direction != Direction::LEFT)
                    direction = Direction::RIGHT;
                break;
            default:
                break;
            }
            return true;

        case 119:case 87:
            if (direction != Direction::DOWN)
                direction = Direction::UP;
            break;
        case 115:case 83:
            if (direction != Direction::UP)
                direction = Direction::DOWN;
            break;
        case 97:case 65:
            if (direction != Direction::RIGHT)
                direction = Direction::LEFT;
            break;
        case 100:case 68:
            if (direction != Direction::LEFT)
                direction = Direction::RIGHT;
            break;

        case 27://ESC
            return false;

        default:
            return true;

        }
    }
    return true;
}

bool Snake::GetFood(const Food& newfood)
{
    if (snake.back().GetX() == newfood.x && snake.back().GetY() == newfood.y)
        return true;
    else
        return false;
}

bool Snake::GetStarFood(Food& newfood)
{
    if (snake.back().GetX() == newfood.star_x && snake.back().GetY() == newfood.star_y)
    {
        newfood.star_flag = false;
        newfood.star_x = 0;
        newfood.star_y = 0;
        SetCursorPosition(1, 0);
        std::cout << "                                                            ";
        return true;
    }
    else
        return false;
}