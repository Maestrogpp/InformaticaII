#pragma once
#include<string>
#include<iostream>
using namespace std;

class Vector2d{
    private:
        float axis_x;
        float axis_y;
    public:
        Vector2d();
        Vector2d(float x, float y);
        float getVectorX();
        float getVectory();
        Vector2d& operator+(Vector2d& otro);
        Vector2d& operator/(int a);
        friend ostream& operator<<(ostream& os, const Vector2d& vector);
};
