#include "Point.h"

Point::Point(float x, float y) : m_x(x), m_y(y), ptrm_x(0), ptrm_y(0){}

Point::Point(float &x, float &y) : m_x(x), m_y(y), ptrm_x(&x), ptrm_y(&y){}

float Point::getX(){
    if (ptrm_x != 0){
        return *ptrm_x;
    }
    return m_x;
}

float Point::getY(){
    if (ptrm_y != 0){
        return *ptrm_y;
    }
    return m_y;
}

void Point::move(float& x_decal, float& y_decal){
    if (ptrm_x != 0){
        *ptrm_x += x_decal;
        *ptrm_y += y_decal;
    }
    else{
        m_x += x_decal;
        m_y += y_decal;
    }
}

