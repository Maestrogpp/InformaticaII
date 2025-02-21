#include"coche.h"
#include<string>
using namespace std;

coche::coche(){
    nombre = "Default";
    velocidad = 0;
}

void coche::setNombre(string nombre){
    this -> nombre  = nombre;
}

void coche::setVelocidad(double velocidad){
    this -> velocidad = velocidad;
}

string coche::getNombre(){
    return this-> nombre;
}

double coche::getVelocidad(){
    return this-> velocidad;
}