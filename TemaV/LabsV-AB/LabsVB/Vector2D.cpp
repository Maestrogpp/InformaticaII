#include"Vector2D.h"

Vector2D::Vector2D(){
    this->x = 0;
    this->y = 0;
}

Vector2D::Vector2D(float x, float y){
    this-> x = x;
    this-> y = y;
}

Vector2D& Vector2D::operator+(const Vector2D& vector){
    this-> x + vector.x;
    this-> y + vector.y;
}

Vector2D& Vector2D::operator/(int n){
    this-> x /= n;
    this-> y /= n;
}

ostream& operator<<(ostream& os, const Vector2D& vector){
    return os <<"(" + to_string(vector.x) + "," + to_string(vector.y) + ")";
}

Vector2D& Vector2D::operator+=(const Vector2D& vector){
    this-> x += vector.x;
    this-> y += vector.y;
}

Vector2D& Vector2D::operator-(const Vector2D& vector){
    this-> x -= vector.x;
    this-> y -= vector.y;
}
Vector2D& Vector2D::operator*(const Vector2D& vector){
    this-> x *= vector.x;
    this-> y *= vector.y;
}
Vector2D& Vector2D::operator-(int a){
    this-> x -= a;
    this-> y -= a;
}
Vector2D& Vector2D::operator-(float a){
    this-> x -= a;
    this-> y -= a;
}
Vector2D& Vector2D::operator-(double a){
    this-> x -= a;
    this-> y -= a;
}