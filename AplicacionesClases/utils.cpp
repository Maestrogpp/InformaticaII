#include"utils.h"
#include<string>
#include<math.h>
using namespace std;

float Barquito::getVelocidad(){
    return velocidad;
}

position Barquito::getPosition(){
    return posicion;
}

position* Barquito::getOperationPosition(){
    return operatorPosition;
}

void Barquito::setVelocidad(float new_velocidad){
    velocidad = new_velocidad;
}

void Barquito::setPosition(float a, float b, float c){
    posicion.x = a;
    posicion.y = b;
    posicion.z = c;
}

void Barquito::setOperationPosition(position* new_operator){
    operatorPosition = new_operator;
}


void Velocimetro::setPosition(position position){
    posicion_actual = position;
}

void Velocimetro::setLastPosition(position last_position){
    posicion_anterior = last_position;
}

void Velocimetro::setcontador(tiempo new_time){
    contador = new_time;
}


float Velocimetro::calcularVelocidad(int tiempo){
    float a = sqrt((pow(posicion_actual.x - posicion_anterior.x, 2) + pow(posicion_actual.y - posicion_anterior.y, 2) + pow(posicion_actual.z + posicion_anterior.z, 2))) / tiempo;
    return a;
}

