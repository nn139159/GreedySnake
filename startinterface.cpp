#include "startinterface.h"
#include <windows.h>


void StartInterface::PrintText()
{
    for (auto& point : textsnake)
    {
        if (point.GetX() >= 0)
            point.PrintSquare();
    }
}

void StartInterface::ClearText()
{
    for (auto& point : textsnake)
    {
        if (point.GetX() >= 0)
            point.Clear();
        point.ChangePosition(point.GetX() + 1, point.GetY());
    }
}

