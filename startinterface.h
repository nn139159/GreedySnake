#ifndef STRATINTERFACE_H
#define STARTINTERFACE_H

#include <deque>
#include <vector>
#include "point.h"

class StartInterface
{
public:
    StartInterface() : speed(30) {
        textsnake.emplace_back(Point(5, 8));//G
        textsnake.emplace_back(Point(5, 9));
        textsnake.emplace_back(Point(5, 10));
        textsnake.emplace_back(Point(5, 11));
        textsnake.emplace_back(Point(5, 12));
        textsnake.emplace_back(Point(6, 8));
        textsnake.emplace_back(Point(6, 12));
        textsnake.emplace_back(Point(7, 8));
        textsnake.emplace_back(Point(7, 10));
        textsnake.emplace_back(Point(7, 11));
        textsnake.emplace_back(Point(7, 12));
        textsnake.emplace_back(Point(8, 8));
        textsnake.emplace_back(Point(8, 10));
        textsnake.emplace_back(Point(8, 12));
        textsnake.emplace_back(Point(9, 8));
        textsnake.emplace_back(Point(9, 10));                
        textsnake.emplace_back(Point(9, 11));                                
        textsnake.emplace_back(Point(9, 12));

        textsnake.emplace_back(Point(11, 8));//R
        textsnake.emplace_back(Point(11, 9));
        textsnake.emplace_back(Point(11, 10));
        textsnake.emplace_back(Point(11, 11));
        textsnake.emplace_back(Point(11, 12));
        textsnake.emplace_back(Point(12, 8));
        textsnake.emplace_back(Point(12, 10));
        textsnake.emplace_back(Point(13, 8));
        textsnake.emplace_back(Point(13, 10));
        textsnake.emplace_back(Point(13, 11));
        textsnake.emplace_back(Point(13, 12));
        textsnake.emplace_back(Point(14, 8));
        textsnake.emplace_back(Point(14, 9));                
        textsnake.emplace_back(Point(14, 10));                
        textsnake.emplace_back(Point(14, 12));

        textsnake.emplace_back(Point(16, 8));//E
        textsnake.emplace_back(Point(16, 9));
        textsnake.emplace_back(Point(16, 10));
        textsnake.emplace_back(Point(16, 11));
        textsnake.emplace_back(Point(16, 12));
        textsnake.emplace_back(Point(17, 8));
        textsnake.emplace_back(Point(17, 10));
        textsnake.emplace_back(Point(17, 12));
        textsnake.emplace_back(Point(18, 8));
        textsnake.emplace_back(Point(18, 10));
        textsnake.emplace_back(Point(18, 12));
        textsnake.emplace_back(Point(19, 8));
        textsnake.emplace_back(Point(19, 12));

        textsnake.emplace_back(Point(21, 8));//E
        textsnake.emplace_back(Point(21, 9));
        textsnake.emplace_back(Point(21, 10));
        textsnake.emplace_back(Point(21, 11));
        textsnake.emplace_back(Point(21, 12));
        textsnake.emplace_back(Point(22, 8));
        textsnake.emplace_back(Point(22, 10));
        textsnake.emplace_back(Point(22, 12));
        textsnake.emplace_back(Point(23, 8));
        textsnake.emplace_back(Point(23, 10));
        textsnake.emplace_back(Point(23, 12));
        textsnake.emplace_back(Point(24, 8));
        textsnake.emplace_back(Point(24, 12));

        textsnake.emplace_back(Point(26, 8));//D
        textsnake.emplace_back(Point(26, 9));
        textsnake.emplace_back(Point(26, 10));
        textsnake.emplace_back(Point(26, 11));
        textsnake.emplace_back(Point(26, 12));
        textsnake.emplace_back(Point(27, 8));
        textsnake.emplace_back(Point(27, 12));
        textsnake.emplace_back(Point(28, 8));
        textsnake.emplace_back(Point(28, 12));
        textsnake.emplace_back(Point(29, 9));
        textsnake.emplace_back(Point(29, 10));
        textsnake.emplace_back(Point(29, 11));

        textsnake.emplace_back(Point(31, 8));//Y
        textsnake.emplace_back(Point(31, 9));
        textsnake.emplace_back(Point(32, 9));
        textsnake.emplace_back(Point(32, 10));
        textsnake.emplace_back(Point(33, 10));
        textsnake.emplace_back(Point(33, 11));
        textsnake.emplace_back(Point(33, 12));
        textsnake.emplace_back(Point(34, 9));
        textsnake.emplace_back(Point(34, 10));
        textsnake.emplace_back(Point(35, 8));
        textsnake.emplace_back(Point(35, 9));



        textsnake.emplace_back(Point(6, 17));//S
        textsnake.emplace_back(Point(6, 18));
        textsnake.emplace_back(Point(7, 14));
        textsnake.emplace_back(Point(7, 15));
        textsnake.emplace_back(Point(7, 18));
        textsnake.emplace_back(Point(8, 14));
        textsnake.emplace_back(Point(8, 16));
        textsnake.emplace_back(Point(8, 18));
        textsnake.emplace_back(Point(9, 14));
        textsnake.emplace_back(Point(9, 17));
        textsnake.emplace_back(Point(9, 18));
        textsnake.emplace_back(Point(10, 14));                       
        textsnake.emplace_back(Point(10, 15));
                                                    
        textsnake.emplace_back(Point(12, 14));//N
        textsnake.emplace_back(Point(12, 15));
        textsnake.emplace_back(Point(12, 16));
        textsnake.emplace_back(Point(12, 17));
        textsnake.emplace_back(Point(12, 18));
        textsnake.emplace_back(Point(13, 15));
        textsnake.emplace_back(Point(14, 16));
        textsnake.emplace_back(Point(15, 17));
        textsnake.emplace_back(Point(16, 14));
        textsnake.emplace_back(Point(16, 15));
        textsnake.emplace_back(Point(16, 16));
        textsnake.emplace_back(Point(16, 17));
        textsnake.emplace_back(Point(16, 18));

        textsnake.emplace_back(Point(18, 16));//A
        textsnake.emplace_back(Point(18, 17));
        textsnake.emplace_back(Point(18, 18));
        textsnake.emplace_back(Point(19, 15));
        textsnake.emplace_back(Point(19, 16));
        textsnake.emplace_back(Point(20, 14));
        textsnake.emplace_back(Point(20, 16));
        textsnake.emplace_back(Point(21, 15));
        textsnake.emplace_back(Point(21, 16));
        textsnake.emplace_back(Point(22, 16));
        textsnake.emplace_back(Point(22, 17));                               
        textsnake.emplace_back(Point(22, 18));                              

        textsnake.emplace_back(Point(24, 14));//K
        textsnake.emplace_back(Point(24, 15));
        textsnake.emplace_back(Point(24, 16));
        textsnake.emplace_back(Point(24, 17));
        textsnake.emplace_back(Point(24, 18));
        textsnake.emplace_back(Point(25, 16));
        textsnake.emplace_back(Point(26, 15));
        textsnake.emplace_back(Point(26, 17));
        textsnake.emplace_back(Point(27, 14));
        textsnake.emplace_back(Point(27, 18));

        textsnake.emplace_back(Point(29, 14));//E
        textsnake.emplace_back(Point(29, 15));
        textsnake.emplace_back(Point(29, 16));
        textsnake.emplace_back(Point(29, 17));
        textsnake.emplace_back(Point(29, 18));
        textsnake.emplace_back(Point(30, 14));
        textsnake.emplace_back(Point(30, 16));
        textsnake.emplace_back(Point(30, 18));
        textsnake.emplace_back(Point(31, 14));
        textsnake.emplace_back(Point(31, 16));
        textsnake.emplace_back(Point(31, 18));
        textsnake.emplace_back(Point(32, 14));
        textsnake.emplace_back(Point(32, 18));
    }

    void PrintText();
    void ClearText();
private:
    std::deque<Point> startsnake;
    std::vector<Point> textsnake;
    int speed;
};
#endif 
