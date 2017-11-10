#pragma once
#include "Grid.h"

class Coordinates
{

    
    private:
        struct Point
        {
            int x;
            int y;
        };

        Point point;


    public:
        Coordinates();
        Coordinates(int x, int y);
        ~Coordinates();

        int getX() const;
        int getY() const;
            

};
