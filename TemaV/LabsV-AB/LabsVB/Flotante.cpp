#include"Flotante.h"

float Flotante::factor_tolerancia = 0.5;

Flotante::Flotante(){
    this->name = "DEFAULT";
}

float Flotante::operator*(int n){
    return this->factor_tolerancia * n;
}

float Flotante::operator/(int n){
    return this->factor_tolerancia / n;
}

float Flotante::getTolerance(){
    return this->factor_tolerancia;
}

