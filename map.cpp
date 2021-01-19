#include "map.h"
#include <windows.h>

void Map::PrintInitmap()
{
    for (auto& point : initmap)
    {
        point.PrintSquare();
        Sleep(10);
    }
}