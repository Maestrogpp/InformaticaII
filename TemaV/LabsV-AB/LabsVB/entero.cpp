#include"Entero.h"

int Entero::factor_tolerancia = 1;

Entero::Entero(){
    this->name = "DEFAULT";
}

float Entero::operator*(int n){
    return this->factor_tolerancia*2;
}

float Entero::operator/(int n){
    return this->factor_tolerancia/2;
}

int Entero::getTolerance(){
    return this->factor_tolerancia;
}
