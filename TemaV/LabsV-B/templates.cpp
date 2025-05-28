
#include"templates.h"
#include<string>

using namespace std;


Vector2d::Vector2d(){
    this->axis_x = 0;
    this->axis_y = 0;
}

Vector2d::Vector2d(float x, float y){
    this->axis_x = x;
    this->axis_y = y;

}
float Vector2d::getVectorX(){
    return axis_x;
}
float Vector2d::getVectory(){
    return axis_y;
}
Vector2d& Vector2d::operator+(Vector2d& otro){
    Vector2d result;
    result.axis_x = this-> axis_x + otro.axis_x;
    result.axis_y = this-> axis_y + otro.axis_y;
    return result;
}
Vector2d& Vector2d::operator/(int a){
    Vector2d result;
    result.axis_x = this-> axis_x / a;
    result.axis_y = this-> axis_y / a;
    return result;
}

ostream& operator<<(ostream& os, const Vector2d& vector){
    return os << "la media en el eje x:"<< to_string(vector.axis_x) << "en el eje y:" << to_string(vector.axis_y);
}