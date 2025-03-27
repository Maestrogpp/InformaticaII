#include"Formasgeometricas.h"
#include<string>

using namespace std;

Geometric::Geometric(){
    this -> lados = 0;
    this -> superficie = 0;
    this -> dimension = 0;
}

Geometric::Geometric(int lados, float superficie, int dimension){
    this -> lados = lados;
    this -> superficie = superficie;
    this -> dimension = dimension;
}

void Geometric::setLados(int lados){
    this-> lados = lados;
}

void Geometric::setSuperficie(float superficie){
    this-> superficie = superficie;
}

void Geometric::setDimension(int dimension){
    this-> dimension = dimension;
}


int Geometric::getLados(){
    return this->lados;
}

float Geometric::getSuperficie(){
    return this->superficie;
}

int Geometric::getDimension(){
    return this->dimension;
}

string Geometric::toString(){
    return "La figura tiene: " + to_string(this->lados) + " lados, es de: " + to_string(this->dimension) + " y una superficie de: " + to_string(this->superficie);
}
