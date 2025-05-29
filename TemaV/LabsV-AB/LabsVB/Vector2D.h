#pragma once
#include<iostream>
using namespace std;

class Vector2D{
    private:
        float x;
        float y;
    public:
        Vector2D();
        Vector2D(float x, float y);
        Vector2D& operator+(const Vector2D& vector);
        Vector2D& operator/(int n);
        Vector2D& operator+=(const Vector2D& vector);
        Vector2D& operator-(const Vector2D& vector);
        Vector2D& operator-(int a);
        Vector2D& operator-(float a);
        Vector2D& operator-(double a);
        Vector2D& operator*(const Vector2D& vector);
        friend ostream& operator<<(ostream& os, const Vector2D& vector);
};  