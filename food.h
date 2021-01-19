#ifndef FOOD_H
#define FOOD_H
#include "snake.h"
class Snake;
class Food
{
public:
	Food(): count(0), flash_flag(false), star_flag(false), x(0), y(0), star_x(0), star_y(0), progress_bar(0) {}
    void DrawFood(Snake&);
    void DrawBigFood(Snake&);
    void FlashStarFood();
    bool GetStarFlag();
private:
    int count;
    bool flash_flag;
    bool star_flag;
    int x, y;
    int star_x, star_y;
    int progress_bar;
    friend class Snake;
};
#endif
