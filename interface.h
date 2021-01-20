#include <deque>
#include <vector>
#include "point.h"

class Interface
{
public:
    Interface() {};
    void Startinterface();
    void Printmap();
    void PrintText();
    void ClearText();
    void Initmap();
private:
    std::vector<Point> pointdata;
};

