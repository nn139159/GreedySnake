#include "interface.h"
#include <windows.h>


void Interface::PrintText()
{
    for (auto& point : pointdata)
    {
        if (point.GetX() >= 0)
            point.PrintSquare();
    }
}

void Interface::ClearText()
{
    for (auto& point : pointdata)
    {
        if (point.GetX() >= 0)
            point.Clear();
        point.ChangePosition(point.GetX() + 1, point.GetY());
    }
}

void Interface::Printmap()
{
    for (auto& point : pointdata)
    {
        point.PrintSquare();
        Sleep(10);
    }
}

void Interface::Startinterface() 
{
    pointdata.emplace_back(Point(5, 8));//G
    pointdata.emplace_back(Point(5, 9));
    pointdata.emplace_back(Point(5, 10));
    pointdata.emplace_back(Point(5, 11));
    pointdata.emplace_back(Point(5, 12));
    pointdata.emplace_back(Point(6, 8));
    pointdata.emplace_back(Point(6, 12));
    pointdata.emplace_back(Point(7, 8));
    pointdata.emplace_back(Point(7, 10));
    pointdata.emplace_back(Point(7, 11));
    pointdata.emplace_back(Point(7, 12));
    pointdata.emplace_back(Point(8, 8));
    pointdata.emplace_back(Point(8, 10));
    pointdata.emplace_back(Point(8, 12));
    pointdata.emplace_back(Point(9, 8));
    pointdata.emplace_back(Point(9, 10));
    pointdata.emplace_back(Point(9, 11));
    pointdata.emplace_back(Point(9, 12));

    pointdata.emplace_back(Point(11, 8));//R
    pointdata.emplace_back(Point(11, 9));
    pointdata.emplace_back(Point(11, 10));
    pointdata.emplace_back(Point(11, 11));
    pointdata.emplace_back(Point(11, 12));
    pointdata.emplace_back(Point(12, 8));
    pointdata.emplace_back(Point(12, 10));
    pointdata.emplace_back(Point(13, 8));
    pointdata.emplace_back(Point(13, 10));
    pointdata.emplace_back(Point(13, 11));
    pointdata.emplace_back(Point(13, 12));
    pointdata.emplace_back(Point(14, 8));
    pointdata.emplace_back(Point(14, 9));
    pointdata.emplace_back(Point(14, 10));
    pointdata.emplace_back(Point(14, 12));

    pointdata.emplace_back(Point(16, 8));//E
    pointdata.emplace_back(Point(16, 9));
    pointdata.emplace_back(Point(16, 10));
    pointdata.emplace_back(Point(16, 11));
    pointdata.emplace_back(Point(16, 12));
    pointdata.emplace_back(Point(17, 8));
    pointdata.emplace_back(Point(17, 10));
    pointdata.emplace_back(Point(17, 12));
    pointdata.emplace_back(Point(18, 8));
    pointdata.emplace_back(Point(18, 10));
    pointdata.emplace_back(Point(18, 12));
    pointdata.emplace_back(Point(19, 8));
    pointdata.emplace_back(Point(19, 12));

    pointdata.emplace_back(Point(21, 8));//E
    pointdata.emplace_back(Point(21, 9));
    pointdata.emplace_back(Point(21, 10));
    pointdata.emplace_back(Point(21, 11));
    pointdata.emplace_back(Point(21, 12));
    pointdata.emplace_back(Point(22, 8));
    pointdata.emplace_back(Point(22, 10));
    pointdata.emplace_back(Point(22, 12));
    pointdata.emplace_back(Point(23, 8));
    pointdata.emplace_back(Point(23, 10));
    pointdata.emplace_back(Point(23, 12));
    pointdata.emplace_back(Point(24, 8));
    pointdata.emplace_back(Point(24, 12));

    pointdata.emplace_back(Point(26, 8));//D
    pointdata.emplace_back(Point(26, 9));
    pointdata.emplace_back(Point(26, 10));
    pointdata.emplace_back(Point(26, 11));
    pointdata.emplace_back(Point(26, 12));
    pointdata.emplace_back(Point(27, 8));
    pointdata.emplace_back(Point(27, 12));
    pointdata.emplace_back(Point(28, 8));
    pointdata.emplace_back(Point(28, 12));
    pointdata.emplace_back(Point(29, 9));
    pointdata.emplace_back(Point(29, 10));
    pointdata.emplace_back(Point(29, 11));

    pointdata.emplace_back(Point(31, 8));//Y
    pointdata.emplace_back(Point(31, 9));
    pointdata.emplace_back(Point(32, 9));
    pointdata.emplace_back(Point(32, 10));
    pointdata.emplace_back(Point(33, 10));
    pointdata.emplace_back(Point(33, 11));
    pointdata.emplace_back(Point(33, 12));
    pointdata.emplace_back(Point(34, 9));
    pointdata.emplace_back(Point(34, 10));
    pointdata.emplace_back(Point(35, 8));
    pointdata.emplace_back(Point(35, 9));



    pointdata.emplace_back(Point(6, 17));//S
    pointdata.emplace_back(Point(6, 18));
    pointdata.emplace_back(Point(7, 14));
    pointdata.emplace_back(Point(7, 15));
    pointdata.emplace_back(Point(7, 18));
    pointdata.emplace_back(Point(8, 14));
    pointdata.emplace_back(Point(8, 16));
    pointdata.emplace_back(Point(8, 18));
    pointdata.emplace_back(Point(9, 14));
    pointdata.emplace_back(Point(9, 17));
    pointdata.emplace_back(Point(9, 18));
    pointdata.emplace_back(Point(10, 14));
    pointdata.emplace_back(Point(10, 15));

    pointdata.emplace_back(Point(12, 14));//N
    pointdata.emplace_back(Point(12, 15));
    pointdata.emplace_back(Point(12, 16));
    pointdata.emplace_back(Point(12, 17));
    pointdata.emplace_back(Point(12, 18));
    pointdata.emplace_back(Point(13, 15));
    pointdata.emplace_back(Point(14, 16));
    pointdata.emplace_back(Point(15, 17));
    pointdata.emplace_back(Point(16, 14));
    pointdata.emplace_back(Point(16, 15));
    pointdata.emplace_back(Point(16, 16));
    pointdata.emplace_back(Point(16, 17));
    pointdata.emplace_back(Point(16, 18));

    pointdata.emplace_back(Point(18, 16));//A
    pointdata.emplace_back(Point(18, 17));
    pointdata.emplace_back(Point(18, 18));
    pointdata.emplace_back(Point(19, 15));
    pointdata.emplace_back(Point(19, 16));
    pointdata.emplace_back(Point(20, 14));
    pointdata.emplace_back(Point(20, 16));
    pointdata.emplace_back(Point(21, 15));
    pointdata.emplace_back(Point(21, 16));
    pointdata.emplace_back(Point(22, 16));
    pointdata.emplace_back(Point(22, 17));
    pointdata.emplace_back(Point(22, 18));

    pointdata.emplace_back(Point(24, 14));//K
    pointdata.emplace_back(Point(24, 15));
    pointdata.emplace_back(Point(24, 16));
    pointdata.emplace_back(Point(24, 17));
    pointdata.emplace_back(Point(24, 18));
    pointdata.emplace_back(Point(25, 16));
    pointdata.emplace_back(Point(26, 15));
    pointdata.emplace_back(Point(26, 17));
    pointdata.emplace_back(Point(27, 14));
    pointdata.emplace_back(Point(27, 18));

    pointdata.emplace_back(Point(29, 14));//E
    pointdata.emplace_back(Point(29, 15));
    pointdata.emplace_back(Point(29, 16));
    pointdata.emplace_back(Point(29, 17));
    pointdata.emplace_back(Point(29, 18));
    pointdata.emplace_back(Point(30, 14));
    pointdata.emplace_back(Point(30, 16));
    pointdata.emplace_back(Point(30, 18));
    pointdata.emplace_back(Point(31, 14));
    pointdata.emplace_back(Point(31, 16));
    pointdata.emplace_back(Point(31, 18));
    pointdata.emplace_back(Point(32, 14));
    pointdata.emplace_back(Point(32, 18));
}

void Interface::Initmap() {
    pointdata.emplace_back(Point(1, 1));
    pointdata.emplace_back(Point(2, 1));
    pointdata.emplace_back(Point(1, 2));
    pointdata.emplace_back(Point(3, 1));
    pointdata.emplace_back(Point(1, 3));
    pointdata.emplace_back(Point(4, 1));
    pointdata.emplace_back(Point(1, 4));
    pointdata.emplace_back(Point(5, 1));
    pointdata.emplace_back(Point(1, 5));
    pointdata.emplace_back(Point(6, 1));
    pointdata.emplace_back(Point(1, 6));
    pointdata.emplace_back(Point(7, 1));
    pointdata.emplace_back(Point(1, 7));
    pointdata.emplace_back(Point(8, 1));
    pointdata.emplace_back(Point(1, 8));
    pointdata.emplace_back(Point(9, 1));
    pointdata.emplace_back(Point(1, 9));
    pointdata.emplace_back(Point(10, 1));
    pointdata.emplace_back(Point(1, 10));
    pointdata.emplace_back(Point(11, 1));
    pointdata.emplace_back(Point(1, 11));
    pointdata.emplace_back(Point(12, 1));
    pointdata.emplace_back(Point(1, 12));
    pointdata.emplace_back(Point(13, 1));
    pointdata.emplace_back(Point(1, 13));
    pointdata.emplace_back(Point(14, 1));
    pointdata.emplace_back(Point(1, 14));
    pointdata.emplace_back(Point(15, 1));
    pointdata.emplace_back(Point(1, 15));
    pointdata.emplace_back(Point(16, 1));
    pointdata.emplace_back(Point(1, 16));
    pointdata.emplace_back(Point(17, 1));
    pointdata.emplace_back(Point(1, 17));
    pointdata.emplace_back(Point(18, 1));
    pointdata.emplace_back(Point(1, 18));
    pointdata.emplace_back(Point(19, 1));
    pointdata.emplace_back(Point(1, 19));
    pointdata.emplace_back(Point(20, 1));
    pointdata.emplace_back(Point(1, 20));
    pointdata.emplace_back(Point(21, 1));
    pointdata.emplace_back(Point(1, 21));
    pointdata.emplace_back(Point(22, 1));
    pointdata.emplace_back(Point(1, 22));
    pointdata.emplace_back(Point(23, 1));
    pointdata.emplace_back(Point(1, 23));
    pointdata.emplace_back(Point(24, 1));
    pointdata.emplace_back(Point(1, 24));
    pointdata.emplace_back(Point(25, 1));
    pointdata.emplace_back(Point(1, 25));
    pointdata.emplace_back(Point(26, 1));
    pointdata.emplace_back(Point(1, 26));
    pointdata.emplace_back(Point(27, 1));
    pointdata.emplace_back(Point(1, 27));
    pointdata.emplace_back(Point(28, 1));
    pointdata.emplace_back(Point(1, 28));
    pointdata.emplace_back(Point(29, 1));
    pointdata.emplace_back(Point(1, 29));
    pointdata.emplace_back(Point(30, 1));
    pointdata.emplace_back(Point(1, 30));
    pointdata.emplace_back(Point(30, 2));
    pointdata.emplace_back(Point(2, 30));
    pointdata.emplace_back(Point(30, 3));
    pointdata.emplace_back(Point(3, 30));
    pointdata.emplace_back(Point(30, 4));
    pointdata.emplace_back(Point(4, 30));
    pointdata.emplace_back(Point(30, 5));
    pointdata.emplace_back(Point(5, 30));
    pointdata.emplace_back(Point(30, 6));
    pointdata.emplace_back(Point(6, 30));
    pointdata.emplace_back(Point(30, 7));
    pointdata.emplace_back(Point(7, 30));
    pointdata.emplace_back(Point(30, 8));
    pointdata.emplace_back(Point(8, 30));
    pointdata.emplace_back(Point(30, 9));
    pointdata.emplace_back(Point(9, 30));
    pointdata.emplace_back(Point(30, 10));
    pointdata.emplace_back(Point(10, 30));
    pointdata.emplace_back(Point(30, 11));
    pointdata.emplace_back(Point(11, 30));
    pointdata.emplace_back(Point(30, 12));
    pointdata.emplace_back(Point(12, 30));
    pointdata.emplace_back(Point(30, 13));
    pointdata.emplace_back(Point(13, 30));
    pointdata.emplace_back(Point(30, 14));
    pointdata.emplace_back(Point(14, 30));
    pointdata.emplace_back(Point(30, 15));
    pointdata.emplace_back(Point(15, 30));
    pointdata.emplace_back(Point(30, 16));
    pointdata.emplace_back(Point(16, 30));
    pointdata.emplace_back(Point(30, 17));
    pointdata.emplace_back(Point(17, 30));
    pointdata.emplace_back(Point(30, 18));
    pointdata.emplace_back(Point(18, 30));
    pointdata.emplace_back(Point(30, 19));
    pointdata.emplace_back(Point(19, 30));
    pointdata.emplace_back(Point(30, 20));
    pointdata.emplace_back(Point(20, 30));
    pointdata.emplace_back(Point(30, 21));
    pointdata.emplace_back(Point(21, 30));
    pointdata.emplace_back(Point(30, 22));
    pointdata.emplace_back(Point(22, 30));
    pointdata.emplace_back(Point(30, 23));
    pointdata.emplace_back(Point(23, 30));
    pointdata.emplace_back(Point(30, 24));
    pointdata.emplace_back(Point(24, 30));
    pointdata.emplace_back(Point(30, 25));
    pointdata.emplace_back(Point(25, 30));
    pointdata.emplace_back(Point(30, 26));
    pointdata.emplace_back(Point(26, 30));
    pointdata.emplace_back(Point(30, 27));
    pointdata.emplace_back(Point(27, 30));
    pointdata.emplace_back(Point(30, 28));
    pointdata.emplace_back(Point(28, 30));
    pointdata.emplace_back(Point(30, 29));
    pointdata.emplace_back(Point(29, 30));
    pointdata.emplace_back(Point(30, 30));
}
