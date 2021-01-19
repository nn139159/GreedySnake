#include "food.h"
#include <cstdlib>
#include <iostream>
#include "tools.h"

void Food::DrawFood(Snake& gsnake) 
{
	while (true)
	{
		int random_x = rand() % 30;
		int random_y = rand() % 30;
		if (random_x < 2) random_x += 2;
		if (random_y < 2) random_y += 2;
		bool overlapping = false;
		for (auto& point : gsnake.snake) 
		{
			if((point.GetX() == random_x && point.GetY() == random_y) || (random_x == star_x && random_y == star_y))
			{
				overlapping = true;
				break;
			}
		}
		if (overlapping) continue;
		x = random_x;
		y = random_y;
		SetCursorPosition(x, y);
		SetColor(4);
		std::cout << "¡»";
		++count;
		count %= 5;
		if (count == 0) DrawBigFood(gsnake);
		break;
	}
}

void Food::DrawBigFood(Snake& gsnake)
{
	SetCursorPosition(5, 0);
	SetColor(11);
	std::cout << "------------------------------------------";
	progress_bar = 42;
	while (true) {
		int random_x = rand() % 30;
		int random_y = rand() % 30;
		if (random_x < 2) random_x += 2;
		if (random_y < 2) random_y += 2;
		bool overlapping = false;
		for (auto& point : gsnake.snake)
		{
			if ((point.GetX() == random_x && point.GetY() == random_y) || (random_x == star_x && random_y == star_y))
			{
				overlapping = true;
				break;
			}
		}
		if (overlapping) continue;
		star_x = random_x;
		star_y = random_y;
		SetCursorPosition(star_x, star_y);
		SetColor(14);
		std::cout << "¡¹";
		star_flag = true;
		flash_flag = true;
		break;
	}
}

void Food::FlashStarFood()
{
	SetCursorPosition(star_x, star_y);
	SetColor(14);
	if (flash_flag)
	{
		std::cout << "  ";
		flash_flag = false;
	}
	else
	{
		std::cout << "¡¹";
		flash_flag = true;
	}
	SetCursorPosition(26, 0);
	SetColor(11);
	for (int i = 42; i >= progress_bar; --i)
	{
		std::cout << "\b \b";
	}
	--progress_bar;
	if (progress_bar == 0) 
	{
		SetCursorPosition(star_x, star_y);
		std::cout << "  ";
		star_flag = false;
		star_x = 0;
		star_y = 0;
	}
}

bool Food::GetStarFlag()
{
	return star_flag;
}