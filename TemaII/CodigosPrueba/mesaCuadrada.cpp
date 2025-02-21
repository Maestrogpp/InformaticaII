#include<string>
#include"mesaCuadrada.h"

using namespace std;

mesaCuadrada::mesaCuadrada(){
    patas = 4;
    lado = 6.4;
    color = "marron";
}

void mesaCuadrada::setPatas(int patas){
    this -> patas = patas;
}

void mesaCuadrada::setLado(float lado){
    this -> lado = lado;
}

void mesaCuadrada::setcolor(string color){
    this -> color = color;
}

int mesaCuadrada::getPatas(){
    return this->patas;
}

float mesaCuadrada::getLado(){
    return this->lado;
}

string mesaCuadrada::getColor(){
    return this->color;
}

float mesaCuadrada::obtenerArea(){
    return (this->lado * this->lado);
}