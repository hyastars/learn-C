#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle {
    public:
        void setR(int R);
        int getR() ;
        void setCenter(Point center) ;
        Point getCenter() ;
    private:
        int m_R;
        Point m_Center;
};