#ifndef DEF_POINT
#define DEF_POINT

class Point
{
private:
    float m_x, m_y;
    float *ptrm_x, *ptrm_y;
public:
    Point(float x, float y);
    Point(float &x, float &y);
    ~Point();
    void move(float& x_decal, float& y_decal);
    float getX();
    float getY();
};

#endif