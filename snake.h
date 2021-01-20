#pragma once
#include <deque>
#include "point.h"
#include "food.h"

class Food;
class Snake
{
public:
    enum class Direction { UP, DOWN, LEFT, RIGHT };
    Snake()
    {
        snake.emplace_back(14, 8);
        snake.emplace_back(15, 8);
        snake.emplace_back(16, 8);
        direction = Direction::RIGHT;
    }
    void Init();
    void DrawMove();
    void Move();
    bool OverEdge();
    bool HitItself();
    bool ChangeDirection();
    bool GetFood(const Food&);
    bool GetStarFood(Food&);
private:
    std::deque<Point> snake;
    Direction direction;
    friend class Food;
};