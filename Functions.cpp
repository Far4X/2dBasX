#include <math.h>
#include <iostream>
#include "Point.h"

float distanceBetween(Point a, Point b){
    return sqrt(pow((a.getX() - b.getX()), 2) + pow((a.getY() - b.getY()), 2));
}

float distanceBetween(Point *a, Point *b){
    return sqrt(pow((a->getX() - b->getX()), 2) + pow((a->getY() - b->getY()), 2));
}

float distanceBetween(float x_a, float y_a, float x_b, float y_b){
    return sqrt(pow((x_a - x_b), 2) + pow((y_a - y_b), 2));
}

int main(){
    std::cout << "OK" << std::endl;
    return 0;
}